#include <bits/stdc++.h>

using namespace std;

char alpha(string s, int i)
{
    if (s.length() == 0)
        return 0;

    if (isupper(s[i]))
    {
        return s[i];
    }
    return alpha(s, i + 1);
}

void substr(string s, string ans)
{
    int n = s.length();
    int counter = 0;

    if (s.length() == 0)
    {
        cout << ans << endl;
        // cout << counter << endl;

        return;
    }
    char ch = s[0];
    // int code = ch;
    string ros = s.substr(1);
    // //////////////////////////////////////////////////////////////////////////
    substr(ros, ans);
    substr(ros, ans + ch);
    char duo = ans[n - 1];
    if (ch == duo)
    {
        counter++;
        cout << counter << endl;
    }
    return;
    // ? For ASCII
    // substr(ros, ans + to_string(code));
    // //////////////////////////////////////////////////////////////////////////
}

int main()
{
    // substr("ABCAB", "");
    cout << alpha("amKn", 0);
    cout << endl;
    return 0;
}