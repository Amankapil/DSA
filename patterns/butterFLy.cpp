#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int c = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 2 * n; j >=  i; j--)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}