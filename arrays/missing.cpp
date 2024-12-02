#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int b = 0;
    int a[n];
    int am = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[i + 1])
        {
            am = a[i];
        }
        if (b == a[i])
        {
            b++;
        }
    }

    cout << a << b << endl;
}