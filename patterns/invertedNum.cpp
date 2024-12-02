#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int c = 1;
    int a[n];
    for (int i = n; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= n; k++)
        {
            cout << "*";
        }

        // for (int j = 1; j <= i; j++)
        // {
        //     cout << " ";
        // }
        cout << endl;
    }
}