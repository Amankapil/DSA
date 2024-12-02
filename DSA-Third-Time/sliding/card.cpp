#include <bits/stdc++.h>
using namespace std;

int card(int arr[], int k)
{
    int n = 6;
    int i = 0;
    int j = 0;
    int count = 0;

    int sum = 0;

    while (j < n)
    {
        // sum += arr[i];
        // while(sum<)

        if (j < k)
        {
            sum += arr[j];
            j++;
        }
        else if (j == k)
        {
            count = max(sum, count);
            j++;
            i++;
        }
    }
    return count;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 1};
    // int
    cout << card(arr, 3);
}