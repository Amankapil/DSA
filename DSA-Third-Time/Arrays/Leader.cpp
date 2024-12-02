#include <bits/stdc++.h>
using namespace std;

void leader(vector<int> &arr, int n)
{
    int maxi = INT_MIN;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                maxi = arr[j];
            }
        }
    }
}

void leaderoptimal(vector<int> &arr, int n)
{
    int maxi = arr[n - 1];

    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
    }
}

class Solution
{
public:
    vector<int> sortArray(vector<int> &arr)
    {
        int n = arr.size();
        int minn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                minn = min(minn, arr[j]);
            }
            swap(minn, arr[i]);
        }
    }
};