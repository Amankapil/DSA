#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertathead(node *&head, int val){
    
}

void interstTail(node *&head, int val)
{

    node *n = new node(val);
    node *temp = head;
    if (head == NULL)
    {
        insertathead(head, val);
        head->next = n;
        n = head;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;

    n->next = head;
}