#include <bits/stdc++.h>
using namespace std;

void mergearray(vector<int> arr1, vector<int> arr2)
{
    cout << "jkf";
    int n1 = arr1.size();
    int n2 = arr2.size();
    vector<int> temp;
    int sum = 0;
    // int i = 0;
    // int j = 0;
    int n = max(n1, n2);
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] <= arr2[i])
        {
            temp.push_back(arr1[i]);
        }
        else
        {
            temp.push_back(arr2[i]);
        }
    }
    for (auto it : temp)
    {
        cout << it << " ";
    }
    // while()
}
int main()
{
    vector<int> arr1 = {1, 3};
    vector<int> arr2 = {2};

    mergearray(arr1, arr2);

    // int n;
    // cin >> n;
    // int k;

    // cin >> k;
    // int a[n];
    // // int sum = -1;
    // int maxs = INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    // int s = 0;
    // int e = n - 1;
    // sort(a, a + n);
    // bool found = false;

    // for (int i = 0; i < n; i++)
    // {
    //     if (a[s] + a[e] < k)
    //     {
    //         s++;
    //     }
    //     else if (a[s] + a[e] > k)
    //     {
    //         e--;
    //     }
    //     else
    //     {
    //         found = true;
    //     }
    // }
    // if (found)
    // {
    //     cout << "j";
    // }
    // else
    // {
    //     cout << "w";
    // }
}