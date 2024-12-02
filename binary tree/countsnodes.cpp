#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int search(int inorder[], int s, int e, int crr)
{

    for (int i = s; i <= e; i++)
    {
        if (inorder[i] == crr)
        {
            return i;
        }
    }
}

Node *buildtree(int preorder[], int inorder[], int start, int end)
{

    if (start > end)
    {
        return NULL;
    }
    int idx = 0;
    int curr = preorder[idx];
    idx++;
    Node *node = new Node(curr);

    if (start == end)
    {
        return node;
    }
    int pos = search(inorder, start, end, curr);
    node->left = buildtree(preorder, inorder, start, pos - 1);
    node->right = buildtree(preorder, inorder, pos + 1, end);

    return node;
}

int countnodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return countnodes(root->left) + countnodes(root->right) + 1;
}
int sumnodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return sumnodes(root->left) + sumnodes(root->right) + root->data;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(7);
    root->right->left = new Node(6);

    // levelorder(root);
    cout << countnodes(root) << " ";
    cout << sumnodes(root);

    return 0;
}