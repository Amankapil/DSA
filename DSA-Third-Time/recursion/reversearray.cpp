#include <bits/stdc++.h>
using namespace std;

void reverse(string s, int l, int r)
{
    int n = s.size();
    if (l == r)
    {
        for (int i = 0; i < n; i++)
        {
            cout << s[i];
        }
        return;
    }
    swap(s[l], s[r]);
    reverse(s, l + 1, r - 1);
}

bool isPalindrome(string s, int l, int r)
{
    // int n = s.size();
    if (l == r)
        return true;
    if (s[l] == s[r])
    {
        isPalindrome(s, l + 1, r - 1);
    }
    // else
    // {
    //     return false;
    // }
}

// void reverse(vector<int> arr, int l, int r)
// {
//     int n = arr.size();
//     if (l == r)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         return;
//     }
//     swap(arr[l], arr[r]);
//     reverse(arr, l + 1, r - 1);
// }

// void reverstring(string s)
int main()
{
    // vector<int> arr = {1, 3, 4, 4, 4};
    string s = "kadak";
    // vector<int> arr = {};
    int n = s.size();
    int l = 0;
    int r = n - 1;
    cout << isPalindrome(s, l, r);
}