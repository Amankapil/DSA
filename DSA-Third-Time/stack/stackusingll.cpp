#include <bits/stdc++.h>
using namespace std;

class stackNode
{
public:
    int top;
    stackNode *next;

    stackNode(int val)
    {
        top = val;
        next = NULL;
    }
};

class stack
{
public:
    stackNode *top;
    int size;

    stack(int val)
    {
        top = NULL;
    }
};