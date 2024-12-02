#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        // til aai
        // mx = max(mx, a[i]);
        // cout << mx << endl;
        sum = 0;

        for (int j = i; j < n; j++)
        {
            sum += a[j];
            cout << sum << " ";
        }
    }
}