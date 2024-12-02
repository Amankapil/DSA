#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int dec = 0;
    int a[n];
    int i = 0;

    while (n != 0)
    {
        dec += (n % 10) * pow(2, i);
        i++; // increment
        n /= 10;
    }
    cout << dec << endl;
}