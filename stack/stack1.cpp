#include <bits/stdc++.h>
using namespace std;

#define n 100

class stack
{
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack overflow" << endl;
        }
        top++;
        arr[top] = x;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        top--;
    }

    int Top()
    {
        return arr[top];
    }
    int size()
    {
        return top + 1;
    }
};

