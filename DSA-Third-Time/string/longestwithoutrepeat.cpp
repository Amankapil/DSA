#include <bits/stdc++.h>
using namespace std;

void reaped(string s, int n)
{
    int i = 0;
    int j = 0;
    vector<int> mpp(256, -1);
    int maax = 0;

    while (i < n && j < n)
    {
        int count = 0;
        if (mpp[s[j]] != -1)
        {
            i = max(mpp[s[j]] + 1, i);
        }
        mpp[s[j]] = j;
        maax = max(maax, j - i + 1);
        j++;
    }
}