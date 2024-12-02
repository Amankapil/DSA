#include <bits/stdc++.h>
using namespace std;

int maze(int n, int i, int j)
{
    if (i == j)
    {
        return 1;
    }
    if (i > n || j > n)
    {
        return 0;
    }

    return maze(n, i + 1, j) + maze(n, i, j + 1);
}

int combine(int n, int arr[])
{
    
}

int main()
{
    cout << maze(3, 0, 0) << endl;
}