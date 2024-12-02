#include <bits/stdc++.h>
using namespace std;

void twosum(int a[], int n, int k)
{
    int sum = 0;
    int frist = 0;
    int last = 0;
    int j = 0;
    for (int i = 0; i < n;)
    {
        if (a[j] + a[i] == k)
        {
            sum = 1;
            frist = i;
            last = j;
        }
        else
        {
            i++;
            // j++;
        }
    }

    // j++; n

    if (sum == 0)
    {
        cout << "NO" << endl;
        frist = -1;
        last = -1;
    }
    else
    {
        cout << "YES" << endl;
    }
    cout << frist << " " << last << endl;
}

void sortzero(int a[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int f = a[i];
        if (a[i + 1] > f)
        {
            swap(f, a[i + 1]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void mejority(int arr[], int n)
{
    long long mid = n / 2;
    for (int i = 0; i < n; i++)
    {
        int s = 0;
        int r = arr[i];
        int num = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[j] == r)
            {
                s++;
                num = r;
            }
        }

        if (s > mid)
        {
            cout << num << endl;
        }
    }
}

void kaddens(int a[], int n)
{

    int maxi = INT_MIN;

    int sm = 0;

    for (int i = 0; i < n; i++)
    {
        sm = sm + a[i];
        if (sm > maxi)
        {
            maxi = sm;
        }

        if (sm < 0)
        {
            sm = 0;
        }

        // for (int j = i; j < n; j++)
        // {
        //     int sum = 0;
        //     for (int k = i; k < j; k++)
        //     {

        //         sum += a[k];
        //     }
        //     maxi = max(maxi, sum);
        // }

        // if(sum > maxi)
    }

    cout << maxi << endl;
}

void stock(int a[], int n)
{

    int mini = INT16_MAX;
    int maxi = INT16_MIN;
    int profit = 0;
    int indez = 0;
    for (int i = 1; i < n; i++)
    {
        // if (a[i] < mini)
        // {
        //     mini = a[i];
        //     indez = i;
        // }

        mini = min(mini, a[i]);
        profit = max(profit, a[i] - mini);

        // for (int j = i + 1; j < n; j++)
        // {
        //     if (a[j] > a[i])
        //     {
        //         profit = max((a[j] - a[i]), profit);
        //     }
        // }
    }

    // cout << indez << " ";
    // cout << mini << " ";
    // cout << maxi << " ";

    cout << profit;
}

void rearrange(int a[], int n)
{

    sort(a, a + n);
    vector<int> pos;
    vector<int> neg;
    for (int i = 0; i < n; i++)
    {
        // swap(a[i], a[n - i]);

        a[i] < 0 ? neg.push_back(a[i]) : pos.push_back(a[i]);
    }

    for (int i = 0; i < n; i++)
    {

        a[i * 2] = pos[i];
        a[i * 2 + 1] = neg[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void leader(int a[], int n)
{

    vector<int> v;

    // brute force aproach
    // for (int i = 0; i < n; i++)
    // {
    //     bool leader = true;

    //     int f = a[i];
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (a[j] > a[i])
    //         {
    //             v.push_back(a[j]);
    //             // leader = false;
    //             // break;
    //         }
    //     }

    //     // if (leader)
    //     //     v.push_back(a[i]);
    // }

    //  optimal aproachh

    int maxi = a[n - 1];
    v.push_back(maxi);

    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] > maxi)
        {
            v.push_back(a[i]);
            maxi = a[i];
        }
    }

    // v.push_back(a[n - 1]);

    for (auto &x : v)
    {
        cout << x << " ";
    }
}

void cusecutive(int a[], int n)
{

    sort(a, a + n);
    vector<int> v;

    for (int i = 0; i <= n; i++)
    {
        int s = a[i] + 1;
        if (a[i + 1] == s)
        {
            v.push_back(a[i]);
        }
        // cout << s;
    }
    // for (size_t i = 0; i < count; i++)
    // {
    //     /* code */
    // }

    // for (auto &x : v)
    // {
    //     cout << x << " ";
    // }

    cout << v.size() + 1;
}

void frequency(int a[], int n)
{
    int hash[n];
    for (int i = 0; i < n; i++)
    {
        hash[a[i]]++;
    }
}

int bs(int a[], int n, int k)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] == k)
            return mid;
        else if (a[mid] < k)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int lowebond(int arr[], int n, int k)
{
    int low = 0;
    int high = n - 1;
    int ans = 0;
    // if (low > high)
    //     return -1;

    int mid = (high + low) / 2;

    while (low <= high)
    {
        if (arr[mid] >= k)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;

            // +91 7667737337
        }
    }

    return ans;
}

int upprbond(int arr[], int n, int k)
{

    int low = 0;
    int high = n - 1;

    int ans = 0;

    int mid = (high + low) / 2;

    while (low <= high)
    {

        if (arr[mid] > k)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
            // +91 7667737337
        }
    }
    return ans;
}

int insertbs(int arr[], int n, int low, int high, int k)
{
    // if (low > high)
    //     return -1;

    int mid = (high + low) / 2;
    int ans = 0;

    while (low <= high)
    {
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] < k)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    // if (arr[mid] == k)
    //     return mid;
    // else if (arr[mid] < k)
    //     insertbs(arr, n, mid + 1, high, k);
}

int floorceil(int arr[], int n, int k)
{
    int low = 0;
    int high = n - 1;
    int mid = (high + low) / 2;
    int ans = 0;

    int floor = 0;
    int ciel = 0;

    while (low <= high)
    {
        if (arr[mid] == k)
        {
            floor = k;
            ciel = k;
        }
        else if (arr[mid] < k)
        {

            floor = mid - 1;
            ciel = mid + 1;
            // ans = mid;
            // high = mid - 1;
        }
        // else
        // {
        //     low = mid + 1;
        // }

        return floor;
    }
}

pair<int, int> lastoccur(int arr[], int n, int k)
{

    int lb = lowebond(arr, n, k);
    if (lb == n || arr[lb] != k)
        return {-1, -1};

    // int lb = lowebond(arr, n, k)
    return {lb, upprbond(arr, n, k) - 1};
}

int fristocr(int arr[], int n, int k)
{

    int low = 0;
    int high = n - 1;

    int ans = -1;

    while (low <= high)
    {
        int mid = (high + low) / 2;
        if (arr[mid] == k)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (arr[mid] < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}

int lastocr(int arr[], int n, int k)
{

    int low = 0;
    int high = n - 1;

    int ans = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == k)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (arr[mid] < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}

int countinsertbs(int arr[], int n, int k)
{
    int lb = fristocr(arr, n, k);
    int ub = lastocr(arr, n, k);

    return ub - lb + 1;
}

int peak(int arr[], int n)
{
    int low = 0;
    int high = n - 1;

    int ans = -1;

    while (low <= high)
    {
        int mid = (high + low) / 2;

        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            ans = mid;
        }
    }
}
int main()
{

    int arr[] = {1, 1, 2, 2, 2, 2, 2, 3}; // 1,2,3,4,100,200
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    // int index = bs(arr, n, 6);
    // int index = lowebond(arr, n, 2);
    int index = countinsertbs(arr, n, 2);
    // int index1 = lowebond(arr, n, 3);
    // int index = upprbond(arr, n, 3);
    // int index1 = lastocr(arr, n, 3);
    // int index = fristocr(arr, n, 3);

    // if (index == -1)
    // {
    //     cout << "not present";
    // }
    // else
    // {
    cout << index;
    // cout << index1;
    // }

    // twosum(arr, n, 14);
    // sortzero(arr, n);
    // mejority(arr, n);
    // kaddens(arr, n);
    // stock(arr, n);
    // rearrange(arr, n);
    // leader(arr, n);
    // cusecutive(arr, n);
    return 0;
}

// Name : Aman Kapil
// Contact: 8103075691
// Email ID:amankapil60@gmail.com
// Main Skills:React, Node, Mongodb, Express, Tailwind css, Mysql.
// Preferred Locations : (Bangalore/ Chennai/ Mumbai);
// Total Experience: 2 years of Internship experience in diffrent diffrent companies.
// Relevant Experience: 2 years of Internship experience
// Current Organization:NA;
// Have you Worked in TCS or TATA Groups:   No
// Please Mention Whether You have Documents Like Pay slip, Joining Letter etc.:  YES I have
// Current CTC: 2400000
// Expected CTC:600000
// Notice Period: NA

// Highest Qualification: Bechlores of Technology Full Time

// Year of Passing: 2024
// University Name:Barkatullah University
// Current Location: Bhopal Madhya Pradesh
// EP Reference Number : EP2024IR3310310
// Updated CV attached : Yes

// I will be available from 10 to 5 on 8th feb 2024