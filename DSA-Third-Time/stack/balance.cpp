#include <bits/stdc++.h>
using namespace std;

bool balance(string s)
{
    int n = s.size();
    stack<char> st;
    for (auto it : s)
    {
        if (it == '(' || it == '{' || it == '[')
            st.push(it);
        else
        {
            if (st.size() == 0)
                return false;
            char ch = st.top();
            st.pop();
            if ((it == ')' and ch == '(') or (it == ']' and ch == '[') or (it == '}' and ch == '{'))
                continue;
            else
                return false;
        }
    }
}

int main()
{
    string s = "()({[])";
    cout << balance(s);
}