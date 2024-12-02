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

int searchh(int inorder[], int start, int end, int curr)
{
    for (int i = start; i < end; i++)
    {
        if (inorder[i] == curr)
        {
            return i;
        }
    }
    // return -1;
}

Node *preordertoin(int preorder[], int inorder[], int start, int end)
{
    if (start > end)
    {
        return NULL;
    }
    static int idx = 0;

    int curr = preorder[idx];
    idx++;

    Node *node = new Node(curr);
    if (start == end)
    {
        return node;
    }

    int pos = searchh(inorder, start, end, curr);
    node->left = preordertoin(preorder, inorder, start, pos - 1);
    node->right = preordertoin(preorder, inorder, pos + 1, end);

    return node;
}

void printt(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    printt(root->right);
    cout << root->data << " ";
    printt(root->left);
}
int main()
{
    int preorder[] = {1, 2, 3, 4, 5};
    int inorder[] = {4, 2, 1, 5, 3};

    Node *root = preordertoin(preorder, inorder, 0, 4);
    printt(root);

    return 0;
}
