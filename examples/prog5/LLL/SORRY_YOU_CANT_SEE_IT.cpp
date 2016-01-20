#include "prog5.h"

using namespace std;

void LLL::reverse(node *head)
{
    if(!head)
        return;
    return reverse(head->next);
    if(!head->next)
    {
        this->head = head;
        return;
    }
    head->next->next = head;
    head->next = NULL;
}

void LLL::display(node * head)
{
    if(!head) return;
    if(!head->next)
    {
        cout << head->data << endl;
        return;
    }
    cout << head->data << " -> ";
    display(head->next);
}


void LLL::build(node *& head)
{
    if(!head)
    {
        int random = 0;
        do
        {
            random = rand()%20;
        }while(random < 4);
        
        for(int i = 0; i < random; ++i)
        {
            node * temp = new node;
            temp->data = rand()%50;
            temp->next = head;
            head = temp;
        }
    }
}

void LLL::remove_all(node *&head)
{
    if(!head)
        return;
    remove_all(head->next);
    if(!head->next)
    {
        delete head;
        head = NULL;
    }
}

LLL::LLL()
{
    srand(time(NULL));
    head = NULL;
}
/*
void Tree::build()
{
    int num = 0;
    do
    {
        num  = rand() % 25;
    }while(num < 4);

    for(int i = 0; i < num ; ++i)
        add_data(rand()%30);
}
*/
