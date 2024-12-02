#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int max = INT_MIN;
    int maxt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        maxt = maxt + a[i];
        if (maxt > max)
        {
            max = maxt;
        }
        if (maxt < 0)
        {
             maxt = 0;
        }
    }
    cout<<maxt;
}