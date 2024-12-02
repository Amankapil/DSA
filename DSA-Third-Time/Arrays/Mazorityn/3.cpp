#include <bits/stdc++.h>
using namespace std;

int maxe(vector<int> arr, int n)
{
    int count = 0;
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for (auto it : mp)
    {
        if (it.second > n / 3)
        {
            cout << it.first << " ";
        }
    }
}