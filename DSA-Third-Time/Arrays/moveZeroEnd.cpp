#include <bits/stdc++.h>
using namespace std;

void zeroToEnd(vector<int> arr, int n)
{
    int i = -1;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == 0)
        {
            i = j;
        }
    }

    for (int j = i + 1; j < n; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}
