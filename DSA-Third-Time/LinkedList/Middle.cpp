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
void insett(node *&head, int val)
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
    temp = head;
}
// void insett(node *&head, int val)
// {
//     node *n = new node(val);
//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }
//     node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = n;
// }

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void middle(node *head)
{
    node *slow = head;
    node *fast = head;

    while (fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    cout << slow->data;
}

int main()
{

    node *head = NULL;
    insett(head, 1);
    insett(head, 2);
    insett(head, 3);
    insett(head, 4);
    insett(head, 5);
    display(head);
    cout << endl;
    middle(head);
}