#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int c = 1;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = i; k >= 1; k--)
        {
            cout << k;
        }
        for (int k = 2; k <= i; k++)
        {
            cout << k;
        }

        cout << endl;
    }
}