#include <bits/stdc++.h>
#include <string>

using namespace std;
// find the smallest element in the array and swap with frist one
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    sort(s.begin(), s.end());
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}