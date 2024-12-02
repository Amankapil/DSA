#include <bits/stdc++.h>

using namespace std;

int sqert(int n)
{

    int ans = 0;
    int low = 0;
    int high = n;

    while (low <= high)
    {
        int mid = (high + low) / 2;

        if (mid * mid <= (long long)n)
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

int checkans(int mid, int n, int m)
{

    int ans = 1;
    for (int i = 0; i <= n; i++)
    {
        ans = ans * mid;

        if (ans > m)
        {
            return 2;
        }
    }

    if (ans == m)
    {
        return 1;
    }
    return 0;
}

int nthroot(int n, int m)
{
    int ans = 0;
    int low = 0;
    int high = m;

    while (low <= high)
    {
        int mid = (high + low) / 2;
        int midn = checkans(mid, n, m);

        if (midn == 1)
        {
            return midn;
        }
        else if (midn == 0)
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
        return -1;
    }

    return high;
}
// int totaltime(int n, int arr[])
// {
//     for (int i = 0; i < n; i++)
//     {

//     }

// }
// int keko(int arr[], int n)
// {
//     int low = 0;
//     int high = n - 1;

//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         int reqtime = totaltime(mid, arr);

//     }
// }

int mincount(int d, vector<int> arr)
{
    int n = arr.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += ceil((double)(arr[i]) / (double)(d));
    }

    return ans;
}

int threshold(vector<int> arr, int n, int l)
{
    int low = 1, high = *max_element(arr.begin(), arr.end());
    if (n > l)
        return -1;

    // int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (high + low) / 2;
        int md = mincount(mid, arr);
        if (md <= l)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return low;
}

int findmid(int nd, vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
    }
}

int mising(vector<int> arr, int k)
{
    int n = arr.size();
    int low = 0;
    // int high = *max_element(arr.begin(), arr.end());
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int misi = findmid(mid, arr);
    }
}
int main()
{

    vector<int> arr = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    // int n = 60;
    // 13
    // int ans = sqert(n);
    int ans = threshold(arr, n, 8);
    // int ans = nthroot(n);
    cout << ans;
    return 0;
}