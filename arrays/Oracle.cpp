#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    // int max = INT_MIN;
    int minindx = INT_MAX;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int N = 10e2;
    int idx[N];

    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        if (idx[a[i]] != -1)
        {
            minindx = min(minindx, idx[a[i]]);
        }
        else
        {
            idx[a[i]] = i;
        }
    }
    if (minindx == INT_MAX)
    {
        cout << "ERROR" << endl;
    }
    else
    {
        cout << minindx << endl;
    }

    // cout << minindx << endl;
}