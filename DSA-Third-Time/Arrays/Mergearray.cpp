#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> arr1, vector<int> arr2)
{
    int n = arr1.size();
    int m = arr2.size();
    for (int i = 0; i < m; i++)
    {
        arr1.push_back(arr2[i]);
    }
    sort(arr1.begin(), arr1.end());
    for (int i = n + 1; i < n + m; i++)
    {
        arr2.push_back(arr1[i]);
    }
}

void mergesort(int arr1[], int arr2[], int n, int m)
{
    int left = 0;
    int right = n - 1;
    while (left < n && right > 0)
    {
        if (arr1[right] > arr2[right])
        {
            swap(arr1[right], arr2[left]);
            right--;
            left++;
        }
        else
        {
            break;
        }
    }
}