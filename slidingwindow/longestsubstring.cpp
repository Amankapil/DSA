#include <bits/stdc++.h>

using namespace std;

int longes(string s)
{

    // int l = 0;
    int count = 0;
    set<int> st;

    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i; j < s.length(); j++)
        {
            if (st.find(s[j]) != st.end())
            {
                count = max(count, j - i);
                break;
            }
            st.insert(s[j]);
        }
    }

    return count;
}

int maxone(vector<int> arr, int k)
{
    int ans = 0;
    int j = 0;
    int n = arr.size();
    int zeroc = 0;

    for (int right = 0; right < n; right++)
    {
        if (arr[right] == 0)
        {
            zeroc++;
        }
        while (zeroc > k)
        {
            if (arr[j] == 0)
            {
                zeroc--;
            }
            j++;
        }

        ans = max(ans, right - j + 1);
    }

    return ans;
}

int repeatsubstr(string s, int k)
{
    int ans = 0;
    int window = 1;
    int n = s.length();

    map<char, int> mp;

    for (int i = 0; i < n; i++)
    {
        // mp[s[i]]++;
    }
    int i = 0;

    while (i < n)
    {
        if (s[i] == window)
        {
            window++;
            ans = max(ans, window - i + 1);
        }
        else
        {
            i++;
            window++;
        }
    }

    // for (auto it : mp)
    // {
    //     // cout << it.first << " " << it.second << endl;
    //     ans = max(ans, it.second);
    // }

    return ans + k;
}

// note done
int maxfruit(vector<int> arr)
{
    int ans = 0;
    int n = arr.size();

    int basket = 2;
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for (auto it : mp)
    {
        // cout << it.first << " " << it.second << endl;
        // ans = max(ans, it.second);

        while (basket > 0)
        {
            ans = max(ans, it.second);
            basket--;
        }
    }
    return ans;
}

int maxsumsubarray(vector<int> arr, int k)
{

    int ans = 0;
    int i = 0;
    int sum = 0;
    int n = arr.size();
    for (int j = 0; j < n; j++)
    {
        sum += arr[j];
        if (j >= k - 1)
        {
            ans = max(ans, sum);
            sum = sum - arr[i];
            i++;
        }
    }

    return ans;
}

int nagetiveone(vector<int> arr, int k)
{
    int ans = 0;
    int i = 0;
    int sum = 0;
    int n = arr.size();

    vector<int> temp;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] < 0)
        {
            temp.push_back(arr[j]);
            break;
        }
        else if (j >= k - 1)
        {

            i++;
        }
    }
}

vector<int> twosum(vector<int> arr, int k)
{
    // int j = 0;
    int ans = 0;
    int e = 0;
    int n = arr.size();

    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {

        int comp = k - arr[i];
        if (mpp.find(comp) != mpp.end())
        {
            return {mpp[comp], i};
        }
        mpp[arr[i]] = i;
    }
    return {};
    // cout << ans << " " << e;
}

int kfrequent(vector<int> arr, int k)
{

    map<int, int> mp;
    int n = arr.size();
    int s = 0;
    int sum = 0;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
        s = mp.size();
        // g = mp.size();
    }

    for (auto it : mp)
    {
        ans = max(ans, it.second);
    }

    return s;
}

void selfproduct(vector<int> arr)
{
    int n = arr.size();

    vector<int> left;
    vector<int> rightd;
    vector<int> anss;

    int leftsum = 1;

    vector<int> prefix(n, 1), suffix(n, 1);
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] * arr[i - 1];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] * arr[i + 1];
    }
    vector<int> result(n);
    for (int i = 0; i < n; i++)
    {
        result[i] = prefix[i] * suffix[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << result[i] << endl;
    }
}
int main()
{

    vector<int> arr = {1, 1, 2, 3};
    cout << " Hi" << endl;
    // selfproduct(arr);
    // map<int, int> mp;

    // map<char, int> mp;
    cout << maxfruit(arr);
    // string s = "AABC";
    // int n = s.length();

    // for (int i = 0; i < n; i++)
    // {
    //     mp[s[i]]++;
    // }
    // for (auto it : mp)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }

    // cout << maxsumsubarray(arr, 3);
    // twosum(arr, 9);
    // vector<int> result = twosum(arr, 9);
    // cout << result[0] << ", " << result[1] << endl;

    return 0;
}