#include <fstream>
#include <iostream>
#include <deque>
#include <iomanip>
#include <sstream>
#include <string>
#include <math.h>

using namespace std;


struct BinaryTree {
  BinaryTree *left, *right;
  int data;
  BinaryTree(int val) : left(NULL), right(NULL), data(val) { }
};


int maxHeight(BinaryTree *p);
string intToString(int val);
void printBranches(int branchLen, int nodeSpaceLen, int startLen, int nodesInThisLevel, const deque<BinaryTree*>& nodesQueue, ostream& out);
void printNodes(int branchLen, int nodeSpaceLen, int startLen, int nodesInThisLevel, const deque<BinaryTree*>& nodesQueue, ostream& out);
void printLeaves(int indentSpace, int level, int nodesInThisLevel, const deque<BinaryTree*>& nodesQueue, ostream& out);
void printPretty(BinaryTree *root, int level, int indentSpace, ostream& out);
void add(BinaryTree *& x, int data);
int divide(int start,int stop, BinaryTree *& y);
void removeLeaves(BinaryTree *&root);
BinaryTree * & find_largest(BinaryTree * & root);
int rmv_large_two(BinaryTree * & root, BinaryTree * & prev);
int largest_2(BinaryTree *root);
void addHeight(BinaryTree *& root);
int height(BinaryTree* root);
void addHeight(BinaryTree *& root, int h, int len);


