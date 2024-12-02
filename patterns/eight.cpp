#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    // int c = 1;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        int spce = (2 * n) - (2 * i);
        for (int j = 1; j <= spce; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    for (int i = n; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        int spce = (2 * n) - (2 * i);
        for (int j = 1; j <= spce; j++)
        {
            cout <<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}