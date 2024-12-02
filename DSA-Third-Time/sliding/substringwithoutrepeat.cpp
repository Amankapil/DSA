#include <bits/stdc++.h>
using namespace std;

int substr(string s, int n)
{
    int j = 0;
    unordered_set<int> st;
    int maxi = 0;
    if (s.size() == 0)
        return 0;

    for (int i = 0; i < n; i++)
    {
        if (st.find(s[i]) != st.end())
        {
            while (j < i && st.find(s[i]) != st.end())
            {
                st.erase(s[j]);
                j++;
            }
        }

        st.insert(s[i]);
        maxi = max(maxi, i - j + 1);
    }
    return maxi;
}
