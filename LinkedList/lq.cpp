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

void insert(node *&head, int val)
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
        /* code */
        temp = temp->next;
    }
    temp->next = n;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
bool search(node *head, int val)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == val)
            return true;
        temp = temp->next;
    }
    return false;
}

node *reversel(node *&head)
{
    node *prevptr = NULL;
    node *curptr = head;
    node *nextptr;
    while (curptr != NULL)
    {
        nextptr = curptr->next;
        curptr->next = prevptr;
        prevptr = curptr;
        curptr = nextptr;
    }
    return prevptr;
}
node *reversek(node *&head, int k)
{
    node *prevptr = NULL;
    node *curptr = head;
    node *nextptr;
    int count = 0;
    while (curptr != NULL && count < k)
    {
        nextptr = curptr->next;
        curptr->next = prevptr;
        prevptr = curptr;
        curptr = nextptr;
        count++;
    }
    if (nextptr != NULL)
    {
        head->next = reversek(nextptr, k);
    }
    return prevptr;
}

int main()
{
    node *head = NULL;

    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);
    insert(head, 6);
    display(head);
    int val = 7;
    // cout << search(head, val);
    // node *newhead = reversel(head);
    int k = 2;
    node *khead = reversek(head, k);
    display(khead);

    return 0;
}