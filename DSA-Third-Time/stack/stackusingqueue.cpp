#include <bits/stdc++.h>
using namespace std;

class stack
{
public:
    queue<int> q;

    void push(int x)
    {
        int n = q.size();
        q.push(x);

        for (int i = 0; i < n; i++)
        {
            q.push(q.front());
            q.pop();
        }
    }

    int top()
    {
        return q.front();
    }

    int pop()
    {
        int topop = q.front();
        q.pop();
        return topop;
    }
};