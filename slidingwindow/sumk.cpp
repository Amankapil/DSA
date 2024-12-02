#include <bits/stdc++.h>
using namespace std;

int sumk(vector<int> arr, int k)
{
    int right = 0;
    int ans = 0;
    int sum = 0;
    int n = arr.size();
    int count = 0;
    int i = 0;

    while (right < n)
    {
        sum += arr[right];

        if (sum < k)
        {
            right++;
            count++;
        }
        if (sum == k)
        {
            ans = max(ans, right - i + 1);
            sum -= arr[i];
            i++;
            right++;
            // break;
        }
        // sum += arr[right];
    }

    return ans;
}

int kthlargest(vector<int> arr)
{
    int mani = INT16_MIN;
    int n = arr.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mani)
        {
            mani = max(mani, arr[i]);
        }
    }

    return mani;
}

int maxproduct(vector<int> arr)
{
    int n = arr.size();
    int ans = 0;
    int sum = 1;

    // // kaddens
    // for (int i = 0; i < n; i++)
    // {
    //     sum *= arr[i];

    //     if (sum < 0)
    //     {
    //         sum = 1;
    //     }
    //     ans = max(ans, sum);
    // }

    int pri = 1;

    for (int i = 0; i < n; i++)
    {
        pri *= arr[i];
        ans = max(ans, pri);

        if (ans == 0)
        {
            ans = 1;
        }
    }
    int suf = 1;

    for (int i = n - 1; i >= 0; i--)
    {
        suf *= arr[i];
        ans = max(ans, suf);
        if (ans == 0)
        {
            ans = 1;
        }
    }

    return ans;
}

void anagram_print(vector<string> s1, vector<string> s2)
{
    int n = s1.size();
    int n2 = s2.size();

    int ans = 0;
    int right = 0;
    // while (right < n)
    // {
    //     if(right)
    //     right++;
    // }
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == n2)
        {
            j++;
        }
    }
}

int koddnum(vector<int> &arr, int k)
{
    int n = arr.size();
    // int j = 0;
    int i = 0;
    int ans = 0;
    int sum = 0;
    int right = 0;

    while (right < n)
    {

        if (arr[right] % 2 != 0)
        {
            sum++;
        }

        if (sum < k)
        {
            right++;
        }
        else if (sum == k)
        {
            ans++;
            // sum -= 1;
            right++;
        }
        else if (sum > k)
        {
            sum -= 1;
            // i++;
        }
    }

    return ans;
}
// ////////verable sized array
// int koddnum(vector<int> arr, int k)
// {
// }

void movetoend(vector<int> arr)
{
    int n = arr.size();
    int end = n - 1;
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[end]);
            end--;
        }
    }

    for (auto it : arr)
    {
        cout << it;
    }
}

int main()
{
    vector<int> arr = {1, 0, 2, 3, 0, 4, 0, 1};
    // cout << maxproduct(arr);
    cout << sumk(arr, 1);
    // int sum = 0;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if (arr[i] % 2 != 0)
    //     {
    //         sum++;
    //     } 
    // }
    // cout << movetoend << endl;
    movetoend(arr);
    return 0;
}