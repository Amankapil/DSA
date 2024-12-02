#include <bits/stdc++.h>
using namespace std;

int maxproduct(vector<int> arr)
{

    int n = arr.size();
    int right = 0;
    // int i = 0;
    int sum = 1;
    int ans = 0;
    int pri = 1;
    int suf = 1;

    for (int i = 0; i < n; i++)
    {
        if (pri = 0)
            pri = 1;
        if (suf = 0)
            suf = 1;

        pri *= arr[i];
        suf *= arr[n - i - 1];

        ans = max(ans, max(pri, suf));
    }
    return ans;
}

int countnumber(int n)
{
    int s = 0;
    while (n--)
    {
        int last = n % 10;
        n = n / 10;
        s++;
    }
    return s;
}

int armstrom(int n)
{
    int ans = 0;
    // int d = countnumber(n);
    int temp = n;
    int s = 0;
    while (temp != 0)
    {
        s++;
        temp /= 10;
    }

    while (n != 0)
    {
        int digit = n % 10;
        ans += pow(digit, s);
        n /= 10;
    }
    return ans;
}

int perfectnumber(int n)
{
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            ans += i;
        }
    }
    // cout<<ans<>>
    return ans;
}
int main()
{
    // int n;
    // cin >> n;
    // int a[n];

    int n = 28;
    // cout << armstrom(n) << endl;
    cout << perfectnumber(n) << endl;
    // cout << countnumber(n);

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    // int key;
    // cin >> key;
    // sort(a, a + n);
    // int s = 0;
    // int e = n - 1;
    // bool f = false;
    // int mid;

    // while (s <= e)
    // {
    //     mid = (s + e) / 2;
    //     if (a[mid] == key)
    //     {
    //         cout << mid << endl;
    //         break;
    //     }
    //     else if (a[mid] > key)
    //     {
    //         e = mid - 1;
    //     }
    //     else
    //     {
    //         s = mid + 1;
    //     }
    // }
}
