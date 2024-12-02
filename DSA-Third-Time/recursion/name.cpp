#include <bits/stdc++.h>
using namespace std;

int name(int n)
{

    if (n <= 0)
        return 0;

    return n + name(n - 1);
}
int main()
{
    int n = 5;
    int sum = 0;
    int arr[] = {1, 3, 4, 5};
    cout << name(n);
    // for (int i = 0; i < n; i++)
    // {
    //     sum += name(i);
    // }
}