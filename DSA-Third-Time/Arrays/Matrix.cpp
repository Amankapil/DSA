#include <bits/stdc++.h>
using namespace std;

// ?/working

// bool search(int arr, int n, int m, int k)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (arr[i][j] == k)
//             {
//                 return true;
//             }
//             else if (arr[i][j] >=)
//             {
//                 j--;
//             }
//             else
//             {
//                 i++;
//             }
//         }
//     }
//     return false
// }

int main()
{
    int n = 3, m = 3;
    int arr[n][m] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    int rowStart = 0;
    int colEnd = m - 1;
    int rowEnd = n - 1;
    int colStart = 0;

    while (rowStart <= rowEnd && colStart <= colEnd)
    {
        for (int col = colStart; col <= colEnd; col++)
        {   
            cout << arr[rowStart][col] << "n ";
        }
        rowStart++;
        for (int row = rowStart; row <= rowEnd; row++)
        {
            cout << arr[row][colEnd] << " l";
        }
        colEnd--;
        for (int col = colEnd; col >= colStart; col--)
        {
            cout << arr[rowEnd][col] << " l";
        }
        rowEnd--;
        for (int row = rowEnd; row >= rowStart; row--)
        {
            cout << arr[row][colStart] << " l";
        }
    }
}