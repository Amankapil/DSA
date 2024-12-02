#include <bits/stdc++.h>
using namespace std;

bool duplicate(vector<int> arr)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;

    // map<int, int> map;

    sort(arr.begin(), arr.end());
    for (int i = low; i < high; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

void leftrotate(vector<int> arr, int n)
{
    int temp = arr[0];
    for (int i = 1; i < n - 1; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}

void krotae(vector<int> arr, int n, int k)
{

    vector<int> temp;

    for (int i = 0; i < k; i++)
    {
        temp.push_back(arr[i]);
    }

    for (int i = k; i < n; i++)
    {
        arr[i - k] = arr[i];
    }

    for (int i = n - k; i < n; i++)
    {
        arr[i] = temp[i - (n - k)];
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    // int max;
    // int min;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int prefix[n];
    for (int i = 0; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + a[i];
    }
    int max = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int s = prefix[j] - prefix[i - 1];
            if (s > max)
            {
                max = s;
            }
        }
    }
    cout << max << endl;
}







