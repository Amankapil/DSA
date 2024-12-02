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
        int a[n];
        int minn = INT16_MAX;
        int sum = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            if (a[i] == a[i + 1])
            {
                sum++;
            }
        }
        cout << n - sum << endl;
    }
}