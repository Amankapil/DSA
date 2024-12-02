#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    // int max = INT_MIN;
    int maxt = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {

        if (a[i] > maxt && a[i] > a[i + 1])
        {
            sum++;
        }
        maxt = max(maxt, a[i]);

        // for (int j = i + 1; j < n; j++)
        // {
        //     int dif = a[j] - a[i];
        //     int dif2 = a[i] - a[i + 1];
        // }

        // int dif = a[i - 1] - a[i];
        // int dif2 = a[i] - a[i + 1];
        // if (dif2 == dif)
        // {
        //     sum++;
        //     if (sum > maxt)
        //     {
        //         maxt = sum;
        //     }
        // }
    }
    cout << sum << endl;
}