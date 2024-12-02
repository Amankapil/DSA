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

void preorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void levelorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;

    vector<int> v;
    int ans = 0;

    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();
        if (node != NULL)
        {
            ans = max(ans, node->data);
            v.push_back(ans);
            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
        }
    }
    // return v;
}

vector<int> largestValues(Node *root)
{
}

int sumk(struct Node *root, int k)
{

    if (root == NULL)
    {
        return -1;
    }
    int sum = 0;
    int level = 0;
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        // q.front();
        Node *node = q.front();
        q.pop();
        if (node != NULL)
        {
            if (level == k)
            {
                sum += node->data;
            }
            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
            level++;
        }
    }

    return sum;
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

    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    levelorder(root);
    cout << endl;
    cout << sumk(root, 2);
    return 0;
}