#include <bits/stdc++.h>
using namespace std;

void reverses(string s)
{
    stack<string> st;
    for (int i = 0; i < s.length(); i++)
    {
        string word = "";
        while (s[i] != ' ' && i < s.length())
        {   
            word += s[i];
            i++;
        }
        st.push(word);
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}

string largestodd(string s)
{

    int n = s.size();

    for (int i = n - 1; i >= 0; i--)
    {
        if ((s[i] - '0') % 2 == 1)
        {
            return s.substr(0, i + 1);
        }
    }

    return "";
}

string commonprifix(vector<string> s)
{
    int n = s.size();
    // string word = "";
    for (int i = 0; i < n; i++)
    {
        string word = s[i];
        int l = word.length();

        stack<string> st;

        for (int j = 0; j < l; j++)
        {
            st.push(word);
        }
    }
}

bool anagram(string s, string t)
{

    int n = s.size();
    int g = t.size();
    if (n != g)
    {
        return false;
    }
    bool found = 0;
    for (int i = 0; i < n; i++)
    {

        // string word = s[i];
        for (int j = 0; j < g; j++)
        {
            if (s[i] != t[j])
            {
                return false;
                break;
            }
        }
    }

    return true;
}
int main()
{
    // string s = "TUF is great for interview preparation";
    string s = "anagram";
    string t = "nagaram";

    cout << anagram(s, t);
    // string s = "52";
    // reverses(s);
    // cout << largestodd("52") << " ";
    // cout << largestodd("4206") << " ";
    // cout << largestodd("354271") << " ";
    // string s= "";
    return 0;
}