#include<iostream>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<ctime>
#include <fstream>
#include <deque>
#include <iomanip>
#include <string>
#include <math.h>


struct node
{
    int data;
    node *next;
};

class LLL
{
    public:
        LLL();
        ~LLL();
        void client();
        int add_data_at_center(int to_add);
        int add_middle(int to_data);
        void display();
        void build();
        void reverse();
    private:
        node *head;
        void remove_all(node *&head);
        void display(node *head);
        void build(node *&head);
        void reverse(node *head);
        int add_data(int &count, int to_add, node *&head);
};

