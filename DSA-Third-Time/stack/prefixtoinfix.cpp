#include <bits/stdc++.h>
using namespace std;

string reverse(string s)
{
    int n = s.length();
    int l = 0;
    int r = n - 1;

    while (l <= r)
    {
        swap(s[l], s[r]);
        l++;
        r--;
    }
    return s;
}
void pretoin(string s1)
{
    string s = reverse(s1);
    stack<string> st;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
            // st.push(s[i]);
        }
        else
        {
            string c1 = st.top();
            st.pop();
            string c2 = st.top();
            st.pop();
            string res = '(' + c1 + s[i] + c2 + ')';
            st.push(res);
        }
    }
    cout << st.top();
}

int main()
{
    pretoin("*-A/BC-/AKL");
}