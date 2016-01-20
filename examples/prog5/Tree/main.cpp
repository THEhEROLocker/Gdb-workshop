#include "tree.h"


int main() {
    BinaryTree * root = NULL;
    divide(0, 30, root);
    add(root,16); 
    add(root,15);

    cout << "Tree pretty print with level=1 and indentSpace=0\n\n";

  // Output to console
  BinaryTree *p = NULL;
  printPretty(root, 1, 0, cout);
  
  removeLeaves(p);

  cout << endl;
  printPretty(root, 1, 0, cout);
  cout<<"\n\n\n"<<endl; 
//  largest_2(root); 
  return 0;
}
