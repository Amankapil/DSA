#include <bits/stdc++.h>
using namespace std;

void twosum(vector<int> arr, int n, int k)
{

    int f = 0;
    int s = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            if (arr[i] + arr[j] == k)
            {
                f = i;
                s = j;
            }
            // else
            // {
            //     f = -1;
            //     s = -1;
            // }
        }
    }
    cout << f << " " << s;
}

int main()
{
    vector<int> arr = {2, 6, 5, 8, 11};
    int n = arr.size();
    // int tk = twosum(arr, n);
    // cout << "After Rotating the elements to left " << endl;
    // for (int i = 0; i < n; i++)
    // {
    twosum(arr, n, 14);
    // }
    return 0;
}