#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "52";
    int n = s.length();
    string ans = "";
    for (int i = n - 1; i >= 0; --i)
    {
        if (s[i] - '0' % 2 != 0)
        {
            ans += s.substr(0, i + 1);
        }
    }
}