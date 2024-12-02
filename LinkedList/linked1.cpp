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

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

void insertAtTail(node *&head, int val)
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
void deletions(node *head, int val)
{
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *deleted = temp->next;
    temp->next = temp->next->next;
    delete deleted;
}

void Display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "-> ";
        temp = temp->next;
    }
    cout << endl;
}

bool searrch(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

node *reverse(node *head)
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

node *recursiovereverse(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *newhead = recursiovereverse(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
}

node *reversek(node *head, int k)
{
    node *prevptr = NULL;
    node *curptr = head;
    node *nextptr;
    int count = 0;

    while (curptr != NULL && count <= k)
    {
        nextptr = curptr->next;
        curptr->next = prevptr;
        curptr = nextptr;
        prevptr = curptr;
        count++;
    }
    if (nextptr != NULL)
    {
        head->next = reversek(nextptr, k);
    }
    return prevptr;
}

main()
{
    node *head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);

    // Display(head);
    // insertAtHead(head, 4);
    // Display(head);
    // searrch(head, 1);
    // deletions(head, 3);
    // Display(head);
    node *newhead = reverse(head);
    Display(newhead);

    // return 0;
}