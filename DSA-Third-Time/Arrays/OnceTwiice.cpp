#include <bits/stdc++.h>
using namespace std;

int OnceTwiice(vector<int> arr, int n)
{
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    for (auto it : mp)
    {
        if (it.second < 2)
        {
            return it.first;
        }
    }
}

int xors(vector<int> arr, int n)
{
    int xrr = 0;
    for (int i = 0; i < n; i++)
    {
        xrr = xrr ^ arr[i];
    }

    return xrr;
}