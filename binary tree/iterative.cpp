#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left, right = NULL;
    }
};

void iterative(struct Node *root)
{
    vector<int> preorder;
    if (root == NULL)
        return;

    stack<Node *> st;
    st.push(root);
    while (!st.empty())
    {
        Node *topnode = st.top();
        preorder.push_back(topnode->data);
        st.pop();
        if (topnode->right)
        {
            st.push(topnode->right);
        }
        if (topnode->left)
        {
            st.push(topnode->left);
        }
    }

    for (auto it : preorder)
    {
        cout << it << " ";
    }

    // return preorder;
}

void preOrderTrav(Node *curr)
{
    vector<int> preOrder;
    if (curr == NULL)
        return;

    stack<Node *> s;
    s.push(curr);

    while (!s.empty())
    {
        Node *topNode = s.top();
        preOrder.push_back(topNode->data);
        s.pop();
        if (topNode->right != NULL)
            s.push(topNode->right);
        if (topNode->left != NULL)
            s.push(topNode->left);
    }
    cout << "topNode";

    for (auto it : preOrder)
    {
        cout << it << " ";
    }
}
int main()
{

    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);
    root->right->left = new Node(7);

    preOrderTrav(root);
    // preOrder = ;

    // cout << "The preOrder Traversal is : ";
    // for (int i = 0; i < preOrder.size(); i++)
    // {
    //     cout << preOrder[i] << " ";
    // }
    return 0;
}