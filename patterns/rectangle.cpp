#include <bits/stdc++.h>

using namespace std;

// int main()
// {
//     int r, c;
//     cin >> r >> c;
//     for (int i = 0; i < r; i++)
//     {

//         for (int j = 0; j < c; j++)
//         {
//             if (j == 0 || j == c - 1)
//             {

//                 cout << "*";
//             }
//             else if (i == 0 || i == r - 1)
//             {

//                 cout << "*";
//             }
//             else
//             {

//                 cout << " ";
//             }
//         }
//         // }
//         cout << endl;
//     }
// }

// rectangle
// int main()
// {
//     int r, c;
//     cin >> r >> c;

//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             cout << " *";
//         }
//         cout << endl;
//     }
// }

// left top
void leftprint(int r)
{
    // int r;
    // cin >> r;

    for (int i = 0; i < r; i++)
    {
        for (int j = i; j < r; j++)
        {
            cout << " *";
        }
        cout << endl;
    }
}

// // 112233 top
// int main()
// {
//     int r, c;
//     cin >> r >> c;

//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << i;
//         }
//         cout << endl;
//     }
// }
// 1121231234 top
// int main()
// {
//     int r, c;
//     cin >> r >> c;

//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 1; j < i; j++)
//         {
//             // for (int k = 0; k < j; k++)
//             // {
//             //     cout<<k;
//             // }

//             cout<<j;

//         }
//         cout << endl;
//     }
// }
// 1121231234 top

void print(int n)
{

    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "*";
        }

        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
// void printbottom(int n)
// {

//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = i; j < n * 2 - i - 1; j++)
//         {
//             cout << "*";
//         }

//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }
//         cout << endl;
//     }
// }

void printbottom(int n)

{

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = i; j < n * 2 - i - 1; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void half(int n)
{

    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = i; j < n; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

void zeroprint(int r)
{
    // int r;
    // cin >> r;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            // cout<<j;
            if (j + i % 2 == 1)
            {
                cout << "0 ";
            }
            else
            {
                cout << "1 ";
            }
        }
        cout << endl;
    }
}

void one23(int r)
{
    // int r;
    // cin >> r;

    for (int i = 0; i < r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        for (int j = i; j < r * 2 - i - 1; j++)
        {
            cout << "*";
        }

        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    // for (int i = 0; i < r; i++)
    // {

    //     cout << endl;
    // }
}

void nums(int r)
{
    int num = 1;
    for (int i = 0; i < r; i++)
    {
        for (int j = 1; j < i; j++)
        {

            cout << num;
            num = num + 1;
        }

        cout << endl;
    }
}

void print14(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch < 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin >> n;

    // print(r);
    // printbottom(r);
    // half(r);
    // zeroprint(r);
    // nums(r);
    print14(n);
    // one23(r);
    // leftprint(r);
}