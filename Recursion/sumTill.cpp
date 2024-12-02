#include <bits/stdc++.h>
using namespace std;

int add(int n)
{
    if (n == 0)
        return 0;

    int prevsum = add(n - 1);
    return prevsum + n;
}
int main()
{
    int n;
    cin >> n;
    cout << add(n) << endl;
}