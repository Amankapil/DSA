#include <bits/stdc++.h>

using namespace std;
// find the smallest element in the array and swap with frist one

int missing(vector<int> arr, int n)
{
    int a = arr.size();
    int sum = (n * (n + 1)) / 2;
    int s = 0;

    for (int i = 0; i < a; i++)
    {
        s += arr[i];
    }

    return sum - s;
}

int maxone(vector<int> arr, int n)
{
    int min = INT16_MIN;
    int s = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            s = 0;
        }
        else
        {
            s += 1;
        }

        min = max(min, s);
    }

    return min;
}

int apperonce(vector<int> arr, int n)
{
    sort(arr.begin(), arr.end());
    int sim = 0;
    for (int i = 0; i < n; i += 2)
    {
        if (arr[i] != arr[i + 1])
        {
            sim = arr[i];
            break;
        }
    }
    return sim;
}

void rmdup(vector<int> arr, int n)
{
    set<int> st;

    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }

    // for (int i = 0; i < st.size(); i++)
    // {
    //     cout << arr[i];
    // }

    for (auto it : st)
    {
        cout << it;
    }
}

void movezero(vector<int> arr, int n)
{
    int high = n - 1;
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp.push_back(arr[i]);
        }
    }
}

void maxsubarry(vector<int> arr, int n, int k)
{
    int maxi = INT16_MIN;
    int sum = 0;
    int am = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        am++;
        if (sum == k)
        {
            am = max(am, maxi);
            break;
        }
    }
    cout << am;
}
int main()
{
    // int n;
    // cin >> n;
    // int a[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }

    vector<int> a = {2, 3, 5, 1, 1, 1, 1, 1};
    int n = a.size();
    int f = a[0];
    int minn = INT16_MAX;
    // for (int i = 0; i < n; i++)
    // {
    // int s = 0;
    // int e = n - 1;
    // int i = 0;

    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (a[j] < a[i])
    //         {
    //             swap(a[j], a[i]);
    //             break;
    //         }
    //     }
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }

    // cout << missing(a, n);
    // cout << maxone(a, n);
    // cout << apperonce(a, n);
    // rmdup(a, n);
    maxsubarry(a, n, 5);
}