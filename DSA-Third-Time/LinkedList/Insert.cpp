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
    // head->next = val;
    node *n = new node(val);
    n->next = head;
    head = n;
}

void insertAttail(node *&head, int val)
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

void deletde(node *head, int val)
{
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
void lenght(node *head)
{
    int count = 0;
    node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    cout << count;
}

bool searchh(node *head, int val)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == val)
        {
            return true;
            break;
        }
        temp = temp->next;
    }
    return false;
}

node *reverse(node *head)
{
    node *prev = NULL;
    node *curr = head;
    node *next;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
int main()
{
    node *head = NULL;
    insertAttail(head, 1);
    insertAttail(head, 2);
    insertAttail(head, 3);
    insertAttail(head, 4);
    insert(head, 5);
    Display(head);

    lenght(head);
    cout << '\n';
    deletde(head, 3);
    Display(head);
    lenght(head);
    cout << '\n';
    node *reve = reverse(head);
    Display(reve);
    // cout <<
}