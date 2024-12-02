#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> arr, int n, int k)
{
    vector<int> temp;

    for (int i = k; i < n; i++)
    {
        temp.push_back(arr[i]);
    }

    for (int i = 0; i <= k; i++)
    {
        // arr.push_back(temp[i]);
        temp.push_back(arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
}

int main()
{
    int n = 7;
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 2;
    rotate(arr, n, k);
    // cout << "After Rotating the elements to left " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    return 0;
}