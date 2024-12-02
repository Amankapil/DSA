#include <bits/stdc++.h>

using namespace std;

bool isSafe(int **arr, int x, int y, int n)
{
    for (int row = 0; row < x; ++row)
    {
        if (arr[row][y] == 1)
        {
            return false;
        }
    }

    int row = x;
    int col = y;

    while (row >= 0 && col >= 0)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col--;
    }
    row = x;
    col = y;

    while (row >= 0 && col < n)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col++;
    }

    return true;
}
bool Queen(int **arr, int x, int y, int n, int **solArr)
{
    if (isSafe(arr, x, y, n))
    {
        solArr[x][y] = 1;
        
    }
}

int main()
{
    return 0;
}