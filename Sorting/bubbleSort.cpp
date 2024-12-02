#include <bits/stdc++.h>
using namespace std;
// ? repeatedly swap two adjacent element if they are in wrong order.

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partitjion(int arr[], int l, int r)
{
    int pivot = arr[r];
    int i = l - 1;
    // int j = 0;

    for (int j = l; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, r);
    return i + 1;
}

void quicksort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pi = partitjion(arr, l, r);
        quicksort(arr, l, pi - 1);
        quicksort(arr, pi + 1, r);
    }
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

    // int counter = 1;
    // while (counter < n)
    // {
    //     for (int i = 0; i < n - counter; i++)
    //     {
    //         if (a[i] > a[i + 1])
    //         {
    //             swap(a[i], a[i + 1]);
    //         }
    //     }
    //     counter++;
    // }

    int a[] = {5, 4, 23, 1, 9, 8};

    quicksort(a, 0, 6);

    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
}