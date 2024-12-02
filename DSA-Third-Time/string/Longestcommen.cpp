#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<string> s1 = {"flower", "fbow", "flight"};

    // int n = s1.length();
    string ans = "";
    sort(s1.begin(), s1.end());
    // cout << s1;
    int n = s1.size();
    string f = s1[0];
    string last = s1[n - 1];

    int minn = min(f.length(), last.length());

    for (int i = 0; i < minn; i++)
    {
        if (f[i] == last[i])
        {
            ans += f[i];
        }
        break;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     if (s1[i] == s1[i])
    //     {
    //         ans += s1[i];
    //     }
    // }
}