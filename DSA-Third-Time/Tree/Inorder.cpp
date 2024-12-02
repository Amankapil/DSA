#include <bits/stdc++.h>
using namespace std;

struct Node
{
public:
    int data; //
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

vector<int> preorder(Node *root)
{
    vector<int> ans;

    if (root == NULL)
    {
        return ans;
    }

    stack<Node *> st;

    st.push(root);
    while (!st.empty())
    {
        root = st.top();
        st.pop();
        if (root->right != NULL)
        {
            st.push(root->right);
        }
        ans.push_back(root->data);
        if (root->left != NULL)
        {
            st.push(root->left);
        }
    }
}