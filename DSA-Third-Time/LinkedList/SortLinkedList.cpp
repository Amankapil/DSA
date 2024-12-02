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

node *middle(node *head)
{
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

node *mergerto(node *list1, node *list2)
{
    node *dummy = new node(-1);
    node *temp = dummy;
    while (list1 != NULL && list2 != NULL)
    {
        if (list1->data <= list1->data)
        {
            temp->next = list1;
            temp = list1;
            list1 = list1->next;
        }
        else
        {
            temp->next = list2;
            temp = list2;
            list2 = list2->next;
        }
    }

    return dummy->next;
}

node *mergers(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return;
    }

    node *mid = middle(head);
    node *leftpart = head;
    node *rightpart = mid->next;
    leftpart = mergers(leftpart);
    rightpart = mergers(rightpart);
    return mergerto(leftpart, rightpart);
}