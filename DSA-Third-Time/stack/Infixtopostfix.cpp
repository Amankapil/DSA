#include <bits/stdc++.h>
using namespace std;

int prec(char c)
{
    if (c == '^')
        return 3;
    if (c == '*')
        return 2;
    if (c == '+' || c == '-')
        return 1;
    return -1;
}

string infix(string s)
{
    stack<char> st;
    int n = s.size();
    string res = "";

    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
            res += s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                res += st.top();
                st.pop();
            }
            if (!st.empty())
                st.pop();
        }
        else
        {
            while (!st.empty() && prec(st.top()) > prec(s[i]))
            {
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }
    return res;
}

int main()
{
    cout << infix("(a-b/c)*(a/k-l)") << endl;
}