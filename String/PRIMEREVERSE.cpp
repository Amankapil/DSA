#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int n;
    // char arr[100];

    // cin >> arr;
    // cout << arr << " " << endl;

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string a, b;
        cin >> a >> b;
        int acount = 0;
        int bcount = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
            {
                acount++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (b[i] == '1')
            {
                bcount++;
            }
        }

        if (acount == bcount)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}