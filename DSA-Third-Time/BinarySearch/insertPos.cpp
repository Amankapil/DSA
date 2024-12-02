#include <bits/stdc++.h>
using namespace std;

int insert(vector<int> arr, int n, int k)
{
    int low = 0;
    int high = n - 1;
    int mid = (low + high) / 2;
    while (low <= high)
    {
        if (arr[mid] <= k && arr[mid] >= k)
        {
            return mid;
        }
        else if (arr[mid] > k)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
}