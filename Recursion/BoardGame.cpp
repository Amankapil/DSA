#include <bits/stdc++.h>

using namespace std;

int board(int s, int e)
{
    if (s == e)
    {
        return 1;
    }
    if (s > e)
    {
        return 0;
    }
    int count = 0;

    for (int i = 1; i <= 6; i++)
    {
        count += board(s + i, e);
    }
    return count;
}

int main()
{
    // permutation("ABC", "");

    cout << board(0, 3) << "\n";
    return 0;
}