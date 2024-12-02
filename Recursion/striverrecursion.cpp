#include <bits/stdc++.h>
using namespace std;

float powershell(float x, int n)
{

    if (n == 0)
    {
        return 1;
    }
    float pow = powershell(x, n - 1);
    return pow * x;
}

string nasme(string s, int n)
{
    if (n == 0)
    {
        return "";
    }

    string ss = nasme(s, n - 1);
    return ss + s + " ";
}

void goodnumber(int a, int b, int d)
{

    vector<int> v;
    int ar[b - a];
    for (int i = a; i <= b; i++)
    {
        while (ar[i] > 0)
        {
            int mod = ar[i] % 10;
            ar[i] /= 10;

            if (mod == d)
            {
                break;
            }
            else
            {
            }
            // ar[i]--;
        }
    }
}

int printonton(int i, int n)
{
    if (i > n)
    {
        return 0;
    }

    cout << i << " ";

    int next = printonton(i + 1, n);

    return i;
}

int nntoone(int i, int n)
{
    if (n < i)
    {
        return 0;
    }
    int nexr = nntoone(i, n - 1);
    cout << n << " ";
    return nexr;
}

int fristsum(int n)
{
    if (n == 0)
    {
        return 0;
    }

    int sum = fristsum(n - 1);

    return sum + n;
}

void reversearry(int arr[], int l, int r)
{

    if (l >= r)
    {
        return;
    }
    // int temp = arr[l];
    // arr[l] = arr[r];
    // arr[r] = temp;
    swap(arr[l], arr[r]);
    reversearry(arr, l + 1, r - 1);
}

int febinacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return febinacci(n - 1) + febinacci(n - 2);
}

void subseques(int i, vector<int> &ds, int arr[], int n)
{
    // int n = ds.size();
    if (i == n)
    {
        for (auto it : ds)
        {
            cout << it;
        }
        cout << endl;
        return;
    }

    ds.push_back(arr[i]);
    subseques(i + 1, ds, arr, n);
    ds.pop_back();
    subseques(i + 1, ds, arr, n);
}

void merge(vector<int> &arr, int l, int mid, int h)
{

    vector<int> ds;
    int left = l;
    int right = mid + 1;

    while (left <= mid && right <= h)
    {
        if (arr[left] <= arr[right])
        {
            ds.push_back(arr[left]);
            left++;
        }
        else
        {
            ds.push_back(arr[left]);
            right++;
        }
    }

    while (left <= mid)
    {
        ds.push_back(arr[left]);
        left++;
    }
    while (right <= h)
    {
        ds.push_back(arr[right]);
        right++;
    }
    for (int i = l; i <= h; i++)
    {
        arr[i] = ds[i - l];
    }
}

void mergesort(vector<int> &arr, int l, int h)
{
    if (l >= h)
    {
        return;
    }
    int mid = (l + h) / 2;
    mergesort(arr, l, mid);
    mergesort(arr, mid + 1, h);
    merge(arr, l, mid, h);
}
int main()
{
    float x = 2.10000;
    // int n = 3;
    // float power = powershell(x, n);
    // cout << power;
    string s = "aman";
    // cout << nasme(s, 8) << " ";
    // cout << fristsum(10);
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5};

    int n = 7;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    mergesort(arr, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // int j = sizeof(arr) / sizeof(arr[0]);

    // vector<int> ds;
    // int n = 3;

    // subseques(0, ds, arr, n);

    // reversearry(arr, 0, 4);
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << ' ';
    // }

    // int sn = febinacci(7);
    // cout << sn << endl;
    return 0;
}