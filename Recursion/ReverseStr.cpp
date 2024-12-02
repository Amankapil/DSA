#include <bits/stdc++.h>
using namespace std;

void reverse(string s)
{
    if (s.length() == 0)
    {
        return;
    }

    string ros = s.substr(1);
    reverse(ros);
    cout << s[0];
}

/////////////////////////////////////////////////////////;;;''''''''''''''''''''''''''''''''''''''''''''''''''''
void pirep(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    if (s[0] == 'p' && s[1] == 'i')
    {
        cout << "1.34";
        pirep(s.substr(2));
    }
    else
    {
        cout << s[0];
        pirep(s.substr(1));
    }
}

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int s = sum(n - 1);

    return s + n;
}

void reverserarra(int arr[], int i, int n)
{
    if (i >= n / 2)
    {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    reverserarra(arr, i + 1, n);
}

bool ispalindrom(string s, int i, int n)
{
    if (i >= n / 2)
    {
        return true;
    }

    if (s[i] != s[n - i - 1])
    {
        return false;
    }

    return (ispalindrom(s, i + 1, n));
}

bool revereseee(string s)
{
    if (s.length() == 0)
    {
        return false;
    }
}

int fibo(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return fibo(n - 1) + fibo(n - 2);
}

int fectorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return (n * fectorial(n - 1));
}

int ret(int arr[], int n, int r)
{

    while (r--)
    {
    }
}
int main()
{
    int arr[] = {4, 2, 1, 2, 5, 2, 7};

    // pirep("pipppipiip");
    // cout << sum(4);
    // reverserarra(arr, 0, 6);

    for (int i = 1; i <= 6; i++)
    {
        // cout << arr[i] << " ";
    }
    // cout << ispalindrom("madam", 0, 5);
    cout << fectorial(4);

    // int n = 7;
    // cin >> n;
    // cout << focur(arr, 7, 0, 2) << endl;
    // cout << locur(arr, 7, 0, 2);
}