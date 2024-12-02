#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    int n = s.length();
    string temp = "";
    for (int i = 0; i < n; i++)
    {
        if (isalnum(s[i]))
        {
            temp += tolower(s[i]);
        }
    }

    int l = 0;
    int r = n - 1;
    while (l < r)
    {
        if (temp[l] != temp[r])
        {
            return false;
            break;
        }
        l++;
        r--;
    }
    return true;
}

int main()
{
    string s = "Was it a car or a cat I saw?";
    cout << isPalindrome(s);
}
