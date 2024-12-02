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
void ever(node *&head)
{
    node *odd = head;
    node *even = head->next;
    node *curreven = even;

    while (odd != NULL && even != NULL)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = curreven;
    if (odd->next != NULL)
        even->next = NULL;
}
