#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxp = INT_MIN, minm = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        minm = min(minm, arr[i]);
        maxp = max(maxp, arr[i] - minm);
    }

    return maxp;
}
// problem 2 medium problem leetcode

// int an = arr[0];
// if (an < arr[i])
// {
//     ans += arr[i] - an;
// }
// an = arr[i];
