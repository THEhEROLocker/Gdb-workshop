#include "prog5.h"

using namespace std;

LLL::~LLL()
{
    remove_all(head);
}

int LLL::add_data_at_center(int to_add)
{
    int count = 0;
    return add_data(count,to_add,head);
}

int LLL::add_data(int &count,int to_add, node *&head)
{
    if(!head)
    {
        count = count/2;
    } 
    ++count;
    add_data(count,to_add,head->next); 
    --count;

    if(count == 0)
    {
        node *temp = head;
        head = new node;
        head->data = to_add;
        head->next = temp;
    }
}

void LLL::build()
{
    build(head);
}

void LLL::display()
{
    display(head);
    cout<<endl;
}

int LLL::add_middle(int to_data)
{
    if(!head) return 0;
    if(!head->next)
    {
        node * temp = new node;
        temp->data = to_data;
        temp->next = head;
        head = temp;
        return 1;
    }
    if(head->next)
    {
        int count = 0;
        node * temp = head;
        while(temp)
        {
            ++count;
            temp = temp->next;
        }
        count /= 2;
        while(count)
        {
            if(count == 0)
            {
                node * temp2 = new node;
                temp2->data = to_data;
                temp2->next = temp;
                temp = temp2;
            }
            --count;
            temp = temp->next;
        }
        return 1;
    }
    return 0;
}

void LLL::reverse()
{
    reverse(head);
}

void LLL::client()
{
    char *res = new char[20];
    char reply = '\0';
    int num  = 0;

    cout<<"Yo all, Welcome to the cool code\n\n"<<endl;
    display();
    do
    {
        cout<<"Choose : "<<endl;
        cout<<"ONE -> reverse the list"<<endl;
        cout<<"TWO -> add at the centre"<<endl;
        cout<<"THREE -> display the list"<<endl;
        cout<<"\nEnter choice:";
        cin.get(res,20,'\n');
        cin.ignore(100,'\n');
        if(strcmp("ONE",res) == 0)
        {
            reverse();
            display();
        } 
        else if(strcmp("TWO",res) == 0)
        {
            cout<<"\nITERATIVE or RECURSIVE:";
            cin.get(res,20,'\n');
            cin.ignore(100,'\n');

            cout<<"Enter the number you want to add:";
            cin>>num;cin.ignore(100,'\n');

            if(strcmp(res,"RECURSIVE") == 0)
                add_data_at_center(num);
            else if(strcmp(res,"ITERATIVE") == 0)
                add_middle(num);
            display();
        }
        else if(strcmp(res,"THREE") == 0)
            display();

        cout<<"Do you want to do this again? (y/n) :";
        cin >> reply;cin.ignore(100,'\n');
        cout<<"\n"<<endl;
    }
    while(reply == 'y');
}


