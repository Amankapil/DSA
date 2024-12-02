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

void add1(node *&head)
{
    node *temp = head;
    int carry = 1;
    while (temp != NULL)
    {

        temp->data = temp->data + carry;
        if (temp->data < 10)
        {
            carry = 0;
            break;
        }
        else
        {
            temp->data = 0;
            carry = 1;
        }
        temp = temp->next;
    }

    if (carry == 1)
    {
        node *newnode = new node(1);
        // reverse(head);
        newnode->next = head;
    }
}