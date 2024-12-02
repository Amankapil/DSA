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

void rotate(node *&head, int k)
{
    node *temp = head;
    int i = 0;
}
