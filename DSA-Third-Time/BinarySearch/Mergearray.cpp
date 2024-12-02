#include <bits/stdc++.h>
using namespace std;

int merge(vector<int> arr1, vector<int> arr2, int n, int m)
{
    int mid = 0;
    int mani = max(n, m);
    vector<int> temm;
    for (int i = 0; i < mani; i++)
    {
        if (arr1[i] <= arr2[i])
        {
            temm.push_back(arr1[i]);
        }
        else
        {
            temm.push_back(arr2[i]);
        }
    }
}

int merge2(vector<int> arr1, vector<int> arr2, int n, int m)
{
    int l = m + n;

    int center1 = l / 2;
    int center2 = (l / 2) - 1;
    int count = 0;
    int index1 = -1, index2 = -1;

    int i = 0;
    int j = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            if (count == center1)
            {
                index1 = arr1[i];
            }
            if (count == center2)
            {
                index2 = arr1[i];
            }
            count++;
            i++;
        }
        else
        {
            if (count == center1)
                index1 = arr1[i];

            if (count == center2)
                index2 = arr1[i];

            count++;
            j++;
        }
    }

    while (i < n)
    {
        if (count == center1)
            index1 = arr1[i];

        if (count == center2)
            index2 = arr1[i];
    }
    while (j < n)
    {
        if (count == center1)
            index1 = arr1[j];

        if (count == center2)
            index2 = arr1[j];
    }
}
