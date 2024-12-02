#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int key;
    int l = 0;
    int r = n - 1;
    int mid = l + r / 2;
    cin >> key;
    while (l <= r)
    {
        /* code */

        if (mid == key)
        {
            cout << mid << endl;
        }
        if (a[l] < a[r])
        {
            if (key >= a[l] && key < a[mid])
            {
                r = mid - 1;
                // cout << i << endl;
            }
            else
            {
                l = mid + 1;
            }
        }
        else
        {
            if (key > a[mid] && key <= a[r])
            {
                l = mid + 1;
                // cout << i << endl;
            }
            else
            {
                r = mid - 1;
            }
        }
    }
}