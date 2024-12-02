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

node *newlist(node *&head1, node *&head2)
{
    node *temp1 = head1;
    node *temp2 = head2;
    node *dummy = new node(-1);
    node *dumm = dummy;
    int carry = 0;
    while (temp1 != NULL || temp2 != NULL)
    {
        int sum = carry;
        if (temp1)
            sum += temp1->data;
        if (temp2)
            sum += temp2->data;
        node *list = new node(sum % 10);
        carry = sum / 10;

        dumm->next = list;
        if (temp1)
            temp1 = temp1->next;
        if (temp2)
            temp2 = temp2->next;
    }

    if (carry == 1)
    {

        node *carrynode = new node(1);
        dumm->next = carrynode;
    }

    return dummy->next;
}