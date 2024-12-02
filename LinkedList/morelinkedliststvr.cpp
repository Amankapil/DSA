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

void insertathead(node *&head, int val)
{

    node *n = new node(val);
    n->next = head;
    head = n;
}

void insetattail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

node *mergetwoSortedList(node *head1, node *head2)
{
    node *temp1 = head1;
    node *temp2 = head2;

    node *dummy = new node(-1);
    node *temp3 = dummy;

    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->data < temp2->data)
        {
            temp3->next = temp1;
            temp1 = temp1->next;
            // temp3 = temp3->next;
        }
        else
        {
            temp3->next = temp2;
            temp2 = temp2->next;
        }
        temp3 = temp3->next;
    }

    while (temp1 != NULL)
    {
        temp3->next = temp1;
        temp3 = temp3->next;
        temp1 = temp1->next;
    }
    while (temp2 != NULL)
    {
        temp3->next = temp2;
        temp3 = temp3->next;
        temp2 = temp2->next;
    }

    head1 = dummy->next;
    return head1;
}

node *mergerecursive(node *head1, node *head2)
{
    if (head1 == NULL)
    {
        return head1;
    }
    if (head2 == NULL)
    {
        return head2;
    }
    node *result;
    if (head1->data < head2->data)
    {
        result = head1;
        result->next = (mergerecursive(head1->next, head2));
    }
    else
    {
        result = head2;
        result->next = (mergerecursive(head1, head2->next));
    }

    return result;
}

int main()
{
    node *head = NULL;
    node *head2 = NULL;

    int arr1[] = {1, 4, 5, 7};

    int arr2[] = {2, 3, 6};

    for (int i = 0; i < 4; i++)
    {
        /* code */
        insetattail(head, arr1[i]);
    }
    // cout << endl;
    for (int i = 0; i < 3; i++)
    {
        /* code */
        insetattail(head2, arr2[i]);
    }
    display(head);
    display(head2);

    // node *ans = mergetwoSortedList(head, head2);
    node *ans = mergerecursive(head, head2);
  
    // insetattail(head, 2);
    // insetattail(head, 3);
    // insetattail(head, 4);

    display(ans);
    return 0;
}