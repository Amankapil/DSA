#include <bits/stdc++.h>
using namespace std;

int CountSubArray(int arr[], int n, int k)
{
    // for (int i = 0; i < n; i++)
    // {

    // }
    int sum = 0;
    int count = 0;
    int i = 0;
    int j = 0;
    for (int j = 0; j < n; j++)

    {
        if (sum < k)
        {
            sum += arr[j];
        }
        else if (sum == k)
        {
            count++;
            sum -= arr[i];
            i++;
        }
        if (sum > k)
        {
            sum -= arr[i];
            i++;
        }
    }
    return count;
}

int main()
{
    int arr[] = {3, 1, 2, 4};
    // int n = arr.size();
    int k = 6;
    int cnt = CountSubArray(arr, 4, k);
    cout << "The number of subarrays is: " << cnt << "\n";
    return 0;
}