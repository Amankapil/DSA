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
        node *next = NULL;
    }
};

void sort012(node *&head)
{
    node *zeroHead = new node(-1);
    node *oneHead = new node(-1);
    node *twoHead = new node(-1);
    node *zero = zeroHead;
    node *one = oneHead;
    node *two = twoHead;

    node *newlist = new node(-1);
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data = 0)
        {
            zero->next = temp;
            zero = temp;
        }
        else if (temp->data == 1)
        {
            one->next = temp;
            one = temp;
        }
        else
        {
            two->next = temp;
            two = temp;
        }
        temp = temp->next;
    }

    if (oneHead->next != NULL)
    {
        zero->next = oneHead->next;
    }
    else
    {
        zero->next = twoHead->next;
    }
    one->next = twoHead->next;
    two->next = NULL;
}