#include <bits/stdc++.h>
using namespace std;

int maxone(vector<int> &arr, int n)
{
    int count = 0;
    int maxx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
        }
        else
        {
            count = 0;
        }   
        maxx = max(maxx, count);
    }
    return maxx;
}

int main()
{
    vector<int> nums = {1, 1, 0, 1, 1, 1};

    int ans = maxone(nums, 6);
    cout << "The maximum  consecutive 1's are " << ans;
    return 0;
}