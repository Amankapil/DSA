#include <bits/stdc++.h>
using namespace std;

string dupli(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char t = s[0];
    string as = dupli(s.substr(1));
    if (t == as[0])
    {
        return as;
    }

    return t + as;
}



int prum(int a[], int n, int i)
{
    if (i == n)
    {
        return 1;
    }
    int one = a[i];
    int roa = prum(a, n, i + 1);
}

string throwX(string s)
{
    if (s.length() == 0)
    {
        return "";
    }

    char ch = s[0];
    string as = throwX(s.substr(1));
    if (ch == 'x')
    {
        return as + ch;
        // return as + axes;
    }
    return ch + as;
}

///////////////////////////////////////////''''''''''''''''''''''''''''''''''''''''''''''''''''

int main()
{
    // int arr[] = {4, 2, 1, 2, 5, 2, 7};
    // cout << dupli("axxfhglsxxkjgxx");
    cout << throwX("axxfhglsxxkjgxx");
    // int arr2[] = {4,6,4,2,2,2,25,};

    // int merged[] = {};
}