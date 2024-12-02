#include <bits/stdc++.h>

using namespace std;

int main()
{
    int deci;
    cin >> deci;
    int binary = 0;
    vector<int> arr;
    int i = 0;
    string s = "";

    while (deci != 0)
    {
        // s += deci % 2;
        int st = deci % 2;
        arr.push_back(st);

        i++;
        deci = deci / 2;
    }
    // cout << s << endl;
    for (auto it : arr)
    {
        cout << it;
    }
}