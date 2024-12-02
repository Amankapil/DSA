#include <bits/stdc++.h>
using namespace std;

class node
{

public:
    int data;
    node *next;
    // node *prev;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void intertathead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

void insetattail(node *head, int val)
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

void deletee(node *head, int val)
{
    node *temp = head;

    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *dete = temp->next;
    temp->next = temp->next->next;
    delete dete;
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

int lenght(node *head)
{

    node *temp = head;
    int count = 0;

    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

node *reverselist(node *head)
{

    node *temp = head;
    node *nextt = NULL;
    node *prev = NULL;
    // stack<node *> st;
    while (temp != NULL)
    {
        nextt = temp->next;
        temp->next = prev;
        prev = temp;
        temp = nextt;
    }

    return prev;
}

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

node *sortllist(node *head, int low, int high)
{

    node *temp = head;
    node *mid = middle(head);

    vector<int> arr;

    while (temp != NULL)
    {
        arr.push_back(temp->data);
        temp = temp->next;
    }

    sort(arr.begin(), arr.end());
    temp = head;
    int i = 0;

    while (temp != NULL)
    {
        arr[i] = temp->data;
        i++;
    }

    // sortllist(head, low, mid);
}
node *rede(node *head)
{

    node *temp = head;
    node *nextr = NULL;
    node *prev = NULL;

    while (temp != NULL)
    {
        nextr = temp->next;
        temp->next = prev;
        temp = nextr;
        nextr = prev;
    }

    return prev;
}

bool loop(node *head)
{

    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    if (slow == fast)
    {
        return true;
    }
    return false;
}

node *starting(node *head)
{

    node *slow = head;
    node *fast = head;
    node *entry = head;
    while (fast != NULL && fast->next != NULL)

    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {

            while (slow != entry)
            {
                slow = slow->next;
                entry = entry->next;
            }

            return slow;
        }
    }

    return NULL;
}

bool palindrom(node *head)
{
    node *temp = head;

    // node *frist = head;

    // node *last = head;

    stack<int> st;

    while (temp != NULL)
    {
        st.push(temp->data);
        temp = temp->next;
    }
    temp = head;
    while (temp != NULL)
    {
        if (st.top() != temp->data)
        {
            return false;
        }
        st.pop();

        temp = temp->next;
    }

    return true;
}

bool optimizepalindrom(node *head)
{
    node *temp = head;

    node *fast = head;
    node *slow = head;
    while (fast != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    node *newhead = slow->next;

    node *newfast = rede(newhead);

    node *checkf = head;
    node *newchek = newfast;

    while (newchek != NULL)
    {
        if (checkf->data != newchek->data)
        {
            return false;
        }
        checkf = checkf->next;
        newchek = newchek->next;
    }

    return true;
}

node *delek(node *head, int k)
{

    node *reve = rede(head);

    node *temp = reve;

    while (temp->data != k)
    {
        temp = temp->next;
    }

    node *dd = temp->next;

    delete dd;

    temp->next = temp->next->next;

    return temp;
}

node *deletekkk(node *head, int k)
{
    node *temp = head;

    int count = 0;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    temp = head;
    int j = count - k;

    while (temp != NULL)
    {
        j--;
        if (j == 0)
        {
            break;
        }
        temp = temp->next;
    }
    node *todele = temp->next;

    temp->next = temp->next->next;
    delete (todele);

    return head;
}

node *deletekwithtopoint(node *head, int n)
{
    node *temp = head;
    node *slow = head;
    node *fast = head;
    for (int i = 0; i < n; i++)
    {
        fast = fast->next;
    }

    while (fast->next != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }
    node *todele = slow->next;
    delete (todele);
    slow->next = slow->next->next;

    return head;
}

node *segrate(node *head)
{
    node *temp = head;

    // node *prev = head;

    // int arr[5];
    vector<int> arr;
    while (temp != NULL && temp->next != NULL)
    {
        arr.push_back(temp->data);
        temp = temp->next->next;

        if (temp != NULL && temp->next == NULL)
        {

            arr.push_back(temp->data);
        }
    }

    temp = head->next;
    while (temp != NULL && temp->next != NULL)
    {
        arr.push_back(temp->data);
        temp = temp->next->next;

        if (temp != NULL && temp->next == NULL)
        {
            arr.push_back(temp->data);
        }
    }

    int i = 0;
    temp = head;

    while (temp != NULL)
    {
        temp->data = arr[i];
        i++;
        temp = temp->next;
    }
    // cout << " nodee chl ra h";

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }

    return head;
}

node *sarogate(node *head)
{

    node *temp = head;
    node *odd = head;
    node *even = head->next;
    node *evenhead = head->next;
    while (even != NULL && even->next != NULL)
    {
        odd->next = odd->next->next;
        odd = odd->next;
        even->next = even->next->next;
        even = even->next;
    }

    odd->next = evenhead;

    return head;
}

node *middledelete(node *head)
{

    node *temp = head;

    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    int mid = count / 2;
    temp = head;
    while (temp != NULL)
    {
        mid--;
        if (mid == 0)
        {
            break;
        }
        temp = temp->next;
    }

    node *todle = temp->next;

    temp->next = temp->next->next;
    delete todle;

    return head;
}

node *middledeleteheretory(node *head)
{
    node *temp = head;
    node *fast = head;
    node *slow = head;
    fast = fast->next->next;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    node *todele = slow->next;
    slow->next = slow->next->next;
    delete (todele);

    return head;
}

node *sortLinkds(node *head)
{

    node *temp = head;
    vector<int> arr;
    while (temp != NULL)
    {
        arr.push_back(temp->data);
        temp = temp->next;
    }
    int n = arr.size();
    sort(arr.begin(), arr.end());

    int i = 0;
    temp = head;

    while (temp != NULL)
    {
        temp->data = arr[i];
        i++;
        temp = temp->next;
    }

    return head;
}
// not working
int intersect(node *head1, node *head2)
{
    node *temp = head1;
    node *temp2 = head2;

    while (temp != NULL && temp2 != NULL)
    {
        if (temp->data == temp2->data)
        {
            if (temp->next->next == temp2->next->next)
            {
                return temp->data;
            }
        }
        temp = temp->next;
        temp2 = temp2->next;
    }
}

node *addoneinlist(node *head)
{
    head = reverselist(head);
    node *temp = head;
    int carry = 1;

    // node *
    // temp = head;
    while (temp != NULL)
    {
        temp->data = temp->data + carry;
        if (temp->data < 10)
        {
            carry = 0;
            break;
        }
        else
        {
            temp->data = 0;
            carry = 1;
        }
        temp = temp->next;
    }
    if (carry == 1)
    {
        node *newnode = new node(1);
        head = reverselist(head);
        newnode->next = head;
        return newnode;
    }

    head = reverselist(head);
    return head;
}

node *addtwolist(node *head1, node *head2)
{

    node *temp1 = head1;
    node *temp2 = head2;
    node *newhead = new node(-1);
    node *curr = newhead;
    int carry = 0;

    while (temp1 != NULL || temp2 != NULL)
    {
        int sum = carry;

        if (temp1)
        {
            sum += sum + temp1->data;
        }
        if (temp2)
        {
            sum += sum + temp1->data;
        }
        node *newlist = new node(sum % 10);
        carry = sum / 10;
        curr->next = newlist;
        curr = curr->next;
        if (temp1)
        {
            temp1 = temp1->next;
        }
        if (temp2)
        {
            temp2 = temp2->next;
        }
        if (carry)
        {
            node *newnnode = new node(carry);
            curr->next = newnnode;
        }
    }
}

node *reorder(node *head)
{
    node *temp = head;
    node *mid = middle(head);
    // node *right = mid->next;
    mid->next = NULL;
    node *revers = reverselist(mid->next);
    node *p2 = revers;
    node *p1 = head;
    while (p1 != NULL && p2 != NULL)
    {
        node *tmp1 = p1->next;
        node *tmp2 = p2->next;
        p1->next = p2;
        p2->next = tmp1;
        p1 = tmp1;
        p2 = tmp2;
    }
}
int main()
{

    node *head = NULL;
    intertathead(head, 9);
    intertathead(head, 9);
    intertathead(head, 9);
    intertathead(head, 9);
    // intertathead(head, 5);
    // intertathead(head, 6);
    // intertathead(head, 6);
    display(head);

    // insetattail(head, 50);
    // deletee(head, 4);
    // display(head);

    // int l = lenght(head);
    // cout << l;

    // node *ans = middle(head);
    // node *ans = deletekkk(head, 4);
    // cout << "nn";
    // node *ans = segrate(head);
    // node *ans = middledelete(head);
    // node *ans = middledeleteheretory(head);
    // node *ans = sortLinkds(head);
    node *ans = addoneinlist(head);
    // node *ans = reverselist(head);
    // node *ans = sarogate(head);
    // cout << optimizepalindrom(head);
    display(ans);
    return 0;
}
