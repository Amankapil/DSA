#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertath(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    if (head != NULL)
        head->prev = n;
    head = n;
}

void insert(node *&head, int val)
{
    if (head == NULL)
    {
        insertath(head, val);
        return;
    }
    node *n = new node(val);
    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

void deletee(node *&head, int pos)
{
    node *temp = head;
    int count = 0;
    while (temp != NULL && count != pos)
    {
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;
    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    delete temp;
}

int length(node *head)
{
    int l = 0;
    node *temp = head;
    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}

node *kappned(node *&head, int k)
{
    node *newhead = head;
    node *newtail;
    node *tail = head;

    int l = length(head);
    int count = 1;
    while (tail->next != NULL)
    {
        if (count == l - k)
        {
            newtail = tail;
        }
        if (count == l - k + 1)
        {
            newhead = tail;
        }
        tail = tail->next;
        count++;
    }
    newtail->next = NULL;
    tail->next = head;

    return newhead;
}
node *merge(node *&head1, node *&head2)
{
    node *p1 = head1;
    node *p2 = head2;
    node *dummynode = new node(-1);
    node *p3 = dummynode;

    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data > p2->data)
        {
            p3->next = p1;
            p1 = p1->next;
        }
        else
        {
            p3->next = p2;
            p2 = p2->next;
        }
    }
    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }
    while (p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

void inserft(node *head, int val)
{

    if (head == NULL)
    {
    }

    node *n = new node(val);
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    head = n;
}

node *removeZeroSumSublists(node *head)
{
    node *temp = head;
    int sum = 0;
    while (temp != NULL)
    {
        sum += temp->data;
        temp = temp->next;
        if (sum <= 0)
        {
        }
    }
}

int main()
{
    node *head = NULL;
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);
    display(head);

    return 0;
}