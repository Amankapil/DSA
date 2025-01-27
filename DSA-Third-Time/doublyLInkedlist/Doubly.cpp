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
void insertattail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        insertath(head, val);
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->prev = temp;
}

void delet(node *head)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->prev->next = temp->next;
    delete temp;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << "<-" << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head = NULL;
    for (int i = 0; i < 6; i++)
    {
        insertattail(head, i);
    }

    display(head);
    delet(head);
    display(head);
}