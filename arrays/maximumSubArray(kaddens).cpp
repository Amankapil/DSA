#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    // int sum = -1;
    int maxs = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // ?===========================================================kaddens algorithm;
    int cr = 0;

    for (int i = 0; i < n; i++)
    {
        cr += a[i];
        if (cr < 0)
        {
            cr = 0;
        }
        maxs = max(maxs, cr);
    }

    cout << maxs << endl;
    //========================================================== brute force
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         // cout << a[j] << " ";
    //         int sum = 0;
    //         for (int k = i; k <= j; k++)
    //         {
    //             // cout << a[k] << " ";
    //             sum += a[k];
    //             // if(sum)
    //             maxs = max(sum, maxs);
    //         }
    //         // cout << endl;
    //     }
    // }
    // ?===========================================================cumaltive approach;
    // int cumsum[n];
    // cumsum[0] = 0;

    // for (int i = 1; i <= n; i++)
    // {
    //     cumsum[i] = cumsum[i - 1] + a[i - 1];
    //     if (cumsum[i] < 0)
    //     {
    //         cumsum[i] = 0;
    //     }
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         int sum = cumsum[i] - cumsum[j];
    //         maxs = max(maxs, sum);
    //     }
    // }
}