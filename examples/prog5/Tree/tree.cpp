#include "tree.h"

void addHeight(BinaryTree *& root)
{
    int h = height((BinaryTree*)root);
    int len = 0;
    cout << "The height is: "<< h << endl;


    addHeight(root,h,len);

    return;

}

void addHeight(BinaryTree *& root, int h, int len)
{
    if(!root )
    {
        if(len >= h)
            root = new BinaryTree(69);
        return;
    }
    if ( root->data >= 69 )
        addHeight(root->left,h,++len);
    else
         addHeight(root->right,h,++len);

}

int height(BinaryTree* root)
{
    if(!root)
        return 0;
    else
        return 1 + max(height(root->left),height(root->right));
}

void removeLeaves(BinaryTree *&root)
{
    if(!root)
        return;
    if(!root->left && !root->right)
    {
        delete root;
        return;
    }
   removeLeaves(root->left);
   removeLeaves(root->right); 
}

int largest_2(BinaryTree *root)
{
   if(!root) return 1;
   static int j = 0;
   largest_2(root->right);
   if(!root->right){
        cout<<root->data<<endl;
        if(j == 0 && ++j)
            j = (largest_2(root->left)== 11) ? 1 : 10; 
        return 11;
   }
   cout<< (char)((j == 10 && ++j) ? root->data:0);
}



int rmv_large_two(BinaryTree * & root, BinaryTree * & prev)
{
    //If root is NULL, exit
    static int i = 0;
    if(!root)
        return 0;

    //If root is only BinaryTree
    else if(!root -> left && !root -> right && !prev)
    {
        delete root;
	root = NULL;
	return 1;
    }

    //If root is a leaf, delete root
    else if(!root -> left && !root -> right)
    {
        BinaryTree * temp = prev -> left;
        delete root;
	root = NULL;
	delete prev;
	prev = temp;
	return 1;
    }

    else if(!root -> right && root -> left)
    {
    if( i < 2)
    {
        ++i;
        rmv_large_two(root->left,root);
    }
	BinaryTree * root_left = root -> left;
	root -> left = root -> right = NULL;
	delete root;
	root = root_left;

	return 1;
    }

    return rmv_large_two(root -> right, root);
/*
    //Root and its right child are the largest BinaryTrees
    else if(!root -> right && !root -> left)
    {
        BinaryTree * temp = root -> left;
	delete root -> right;
	root -> right = NULL;
	delete root;
	root = temp;
	return 1;
    }

    //Root's right child has a left child
    else if(!root -> right -> right && root -> right -> left)
    {
        if(
	*/
    /*
        //BinaryTree * par_lar = find_largest(root -> right -> right, root -> right); //Parent of largest

	//If the largest BinaryTree has no left, it
        if(!par_lar -> right -> left)
	{
	    BinaryTree * temp = par_lar -> left;
	    delete par_lar -> right;
	    par_lar -> right = par_lar -> left = NULL;
	    delete par_lar;
	    par_lar = temp;
	    return 1;
	}
*/
/*
	else
	{
	    BinaryTree * temp = find_largest(par_lar -> right -> left, par_lar -> right);
	    temp = temp -> right;
	    BinaryTree * secon_left = temp -> left;
	    temp -> left = temp -> right = NULL;
	    delete temp;
	    temp = secon_left;

	    par_lar = par_lar -> right; //Now par_lar is largest
	    BinaryTree * temp2 = par_lar -> left;
	    par_lar -> left = par_lar -> right = NULL;
	    delete par_lar;
	    par_lar = temp2;
            return 1;
	}

    }

    return rmv_large_two(root -> right, root);
    */
}

BinaryTree * & find_largest(BinaryTree * & root)
{
    if(!root)
        return root;

    if(!root -> right)
    {
        return root;
    }

    return find_largest(root -> right);
}
