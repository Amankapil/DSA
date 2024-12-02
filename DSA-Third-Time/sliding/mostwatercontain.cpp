#include <bits/stdc++.h>
using namespace std;

void mostwater(vector<int> arr)
{
    int n = arr.size();
    int maxare = 0;

    int l = 0;
    int r = n - 1;
    while (l < r)
    {

        int area = min(arr[l], arr[r]) * r - l;

        maxare = max(area, maxare);
        if (arr[l] < arr[r])
        {
            l++;
        }
        else
            r--;
    }
}