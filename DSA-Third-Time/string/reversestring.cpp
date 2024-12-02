#include <bits/stdc++.h>
using namespace std;

void reversestring(string s, int n)
{
    string temp = "";
    string ans = "";
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        if (s[left] != ' ')
        {
            temp += s[left];
        }
        else if (s[left] == ' ')
        {
            if (ans != " ")
            {
                ans = temp + " " + ans;
            }
            else
            {
                ans = temp;
            }
        }
        left++;
    }

    cout << ans << endl;
}
int main()
{
    string s = "hello i ama aman ";
    // stack<string> st;
    int n = s.length();
    // string str = "";
    // for (int i = 0; i < n; i++)
    // {
    //     if (s[i] == ' ')
    //     {
    //         st.push(str);
    //         str = "";
    //     }
    //     else
    //     {
    //         str += s[i];
    //     }
    // }
    // string ans = "";
    // while (st.size() != 0)
    // {
    //     ans += st.top() + " ";
    //     st.pop();
    // }
    // ans += st.top();
    // cout << ans << " ";
    reversestring(s, n);
}