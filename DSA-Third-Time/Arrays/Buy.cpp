#include <bits/stdc++.h>
using namespace std;

int buy(vector<int> arr, int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int buy = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            int sell = arr[j];
            int profit = sell - buy;
            sum = max(profit, sum);
        }
    }
    if (sum < 0)
    {
        return 0;
    }
    return sum;
}

int main()
{
    vector<int> arr = {7, 1, 5, 3, 6, 4};
    int n = arr.size();
    int tk = buy(arr, n);
    // cout << "After Rotating the elements to left " << endl;
    // for (int i = 0; i < n; i++)
    // {
    cout << tk << " ";
    // }
    return 0;
}