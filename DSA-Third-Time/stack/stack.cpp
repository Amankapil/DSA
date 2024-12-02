#include <bits/stdc++.h>
using namespace std;

class stack
{
public:
    int *arr;
    int top;
    int n = 1000;
    stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack Overflow" << endl;
        }
        top++;
        arr[top] = x;
    }
    int pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        int x = arr[top];
        top--;
        return x;
    }

    bool empty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
};

class queue
{
public:
    int *arr;
    int top = -1;
    int curr = -1;
    int n = 10;
    int size = 0;
    queue()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {
        if (top = -1)
        {
            top = 1;
            curr = 1;
        }
        else
        {
            top++;
            arr[top] = x;
            size--;
        }
    }
    int top()
    {
        if (top == -1)
            cout << "Queue is empty" << endl;
        return arr[curr];
    }

    int pop()
    {
        if (top == -1)
            cout << "Queue is empty" << endl;
        int poped = arr[curr];
        curr++;
        size--;
        return poped;
    }
};