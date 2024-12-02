#include <bits/stdc++.h>
using namespace std;

int sliding(vector<int> arr, int n)
{
    int maxSum = INT_MIN;
    int sum = 0;
    int i = 0;
    int j = 0;
    while (i < n && j < n)
    {
        if (j < n)
        {
            sum += arr[j];
            maxSum = max(maxSum, sum);  
            j++;
        }
    }
}