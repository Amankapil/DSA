#include <bits/stdc++.h>
using namespace std;

int SearchInRotated(vector<int> arr, int n, int k)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == k)
        {
            return mid;
        }

        if (arr[low] <= arr[mid])
        {
            if (arr[low] <= k && k <= arr[mid])
            {
                high = mid - 1;
            }
        }
    }
}