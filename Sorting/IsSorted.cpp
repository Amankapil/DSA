#include <bits/stdc++.h>
using namespace std;

// void dec(int n)
// {
//     if (n == 0)
//         return;

//     cout << n << " ";
//     dec(n - 1);
// }

// void inc(int n)
// {
//     if (n == 0)
//         return;

//     inc(n - 1);
//     cout << n << endl;
// }
bool sorted(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }
    bool res = sorted(arr + 1, n - 1);

    int a1 = arr[0];
    int a2 = arr[1];
    if (a1 < a2 && res)
    {
        return 1;
    }

    return 0;
}

int focur(int arr[], int n, int i, int k)
{
    if (i == n)
        return -1;
    if (arr[i] == k)

        return i;

    return focur(arr, n, i + 1, k);
}
int locur(int arr[], int n, int i, int k)
{
    if (i == n)
    {
        return -1;
    }
    int rest = locur(arr, n, i + 1, k);
    if (rest != -1)
    {
        return rest;
    }
    if (arr[i] == k)
    {
        return i;
    }
    return -1;
}

int main()
{
    int arr[] = {4, 2, 1, 2, 5, 2, 7};
    // int n = 7;
    // cin >> n;
    cout << focur(arr, 7, 0, 2) << endl;
    cout << locur(arr, 7, 0, 2);
}