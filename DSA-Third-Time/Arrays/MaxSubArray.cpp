#include <bits/stdc++.h>
using namespace std;

int subArray(vector<int> arr, int n, int k)
{
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            // count++;
            if (sum == k)
            {
                count = max(count, j - i + 1);
            }
        }
    }
    return count;
}

int sliding(vector<int> arr, int n, int k)
{
    int sum = 0;
    int i = 0;
    int j = 0;
    int len = 0;
    while (j < n)
    {

        if (sum < k)
        {
            sum += arr[j];
            j++;
        }
        else if (sum == k)
        {
            len = max(len, j - i + 1);
            // sum -= arr[i];
            i++;
            j++;
        }
        else if (sum > k)
        {
            sum -= arr[i];
            i++;
            j++;
        }
        // j++;
    }

    return len;
}
int main()
{
    vector<int> a = {2, 3, 5, 1, 9};
    long long k = 10;
    // int len = subArray(a, 5, k);
    int llen = sliding(a, 5, k);
    cout << "The length of the longest subarray is: " << llen << "\n";
    return 0;
}