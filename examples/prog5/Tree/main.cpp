#include "tree.h"


int main() {
    BinaryTree * root = NULL;
    add(root,54);
    add(root,44);
    add(root,71);
    add(root,24);
    add(root,36);
    add(root,35);
    add(root,58);
    add(root,84);
    add(root,55);
    add(root,59);
    add(root,63);
    add(root,75);
    add(root,88);

    //  divide(0, 15, root);
//  add(root,16); add(root,15);
//  cout << "Tree pretty print with level=1 and indentSpace=0\n\n";
  // Output to console
  BinaryTree *p = NULL;
  printPretty(root, 1, 0, cout);

  addHeight(root);
  cout << endl;
  printPretty(root, 1, 0, cout);
  cout<<"\n\n\n"<<endl; 
//  largest_2(root); 
  return 0;
}
