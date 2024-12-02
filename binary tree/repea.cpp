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

int search(int inorder[], int start, int end, int curr)
{
    for (int i = start; i < end; i++)
    {
        if (inorder[i] == curr)
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
    static int idx = 0;

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

int searchh(int inorder[], int start, int end, int cur)
{
    for (int i = start; i < end; i++)
    {
        if (inorder[i] == cur)
        {
            return i;
        }
    }
}

Node *postbuild(int postorder[], int inorder[], int start, int end)
{
    if (start > end)
    {
        return NULL;
    }
    static int idx = 0;

    int cur = postorder[idx];
    idx--;

    Node *node = new Node(cur);
    if (start == end)
    {
        return node;
    }
    int pos = searchh(inorder, start, end, cur);

    node->left = postbuild(postorder, inorder, pos + 1, end);
    node->right = postbuild(postorder, inorder, start, pos - 1);

    return node;
}

Node *print(Node *root)
{
    if (root == NULL)
    {
        return root;
    }

    print(root->left);
    cout << root->data << " ";
    print(root->right);
}

int main()
{

    // int preorder[] = {1, 2, 4, 3, 5};

    int postorder[] = {4, 2, 5, 3, 1};
    int inorder[] = {4, 2, 1, 5, 3};

    Node *root = buildtree(postorder, inorder, 0, 4);
    print(root);

    return 0;
}