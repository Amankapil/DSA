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
        int n, x, y;
        cin >> n >> x >> y;

        string a;
        cin >> a;
        int acount = 0;

        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1' )
            {
                acount++;
            }
        }
    }
}