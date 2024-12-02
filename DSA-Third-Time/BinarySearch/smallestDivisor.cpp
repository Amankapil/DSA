#include <bits/stdc++.h>
using namespace std;

int smallseset(vector<int> arr, int n, int k)
{
    int maxi = *max_element(arr.begin(), arr.end());

    for (int i = 1; i <= maxi; i++)
    {
        int total = 0; //
        for (int j = 0; j < n; j++)
        {
            total += ceil((double)(arr[j]) / (double)(i));
        }

        if (total <= k)
        {
            return i;
        }
    }
    return -1;
}

int bs(vector<int> arr, int n, int k)
{
    int low = 1, high = *max_element(arr.begin(), arr.end());
    while (low <= high)
    {
        int sum = 0;
        int mid = low + (high - low) / 2;
        for (int j = 0; j < n; j++)
        {
            sum += ceil((double)(arr[j]) / (double)(mid));
        }
        if (sum <= k)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
}
int main()
{
    vector<int> arr = {8, 4, 2, 3};
    int limit = 10;
    int n = arr.size();
    // int ans = smallseset(arr, n, limit);?
    int ans = bs(arr, n, limit);
    cout << "The minimum divisor is: " << ans << "\n";
    return 0;
}
