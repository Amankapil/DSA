#include <bits/stdc++.h>
using namespace std;

int secondSmalles(int arr[], int n)
{
    int small = INT_MAX;
    int secondSmall = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            secondSmall = small;
            small = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < secondSmall && arr[i] != small)
        {
            secondSmall = arr[i];
        }
    }
    return secondSmall;
}

int secondlargestt(int arr[], int n)
{
    int largest = 0;
    INT16_MIN;
    int secondlargest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > secondlargest && arr[i] != largest)
        {

            secondlargest = arr[i];
        }
    }
    return secondlargest;
}

int main()
{

    int arr[] = {
        1,
        2,
        3,
        4,
        4,
        5,
    };
    // cout << "the valie is" << secondlargest(arr, 6);
    // int min = INT16_MAX;
    // int max = INT_MIN;
    int min2 = secondSmalles(arr, 6);
    int max2 = secondlargestt(arr, 6);

    cout << max2 << " " << min2 << " ";
}