#include <bits/stdc++.h>
using namespace std;

int sqrttt(int arr[], int n)
{
    int low = 0, high = n, ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int val = mid * mid;
        if (val <= (long long)n)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return high;
}