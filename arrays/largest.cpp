#include <bits/stdc++.h>
using namespace std;

void largest(int arr[], int n)
{
    if (n == 0 || n == 1)
    {
        cout << "-1";
    }
    else
    {
        // sort(arr, arr + n);
        // int max = arr[1];
        // int min = arr[n - 2];
        // cout << max << " " << min << endl;

        int max = INT_MIN;
        int min = INT_MAX;

        int small = INT_MAX;
        int large = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < small && arr[i] != min)
            {
                small = arr[i];
            }
            if (arr[i] > large && arr[i] != max)
            {
                large = arr[i];
            }
        }

        cout << large << " " << small;
        // cout << max << " " << min;
    }
}

void isSorted(int arr[], int n)
{

    bool sorted = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            sorted = 1;
            // break;
        }
    }
    cout << sorted << endl;
}

int rmdup(int arr[], int n)
{

    // sort(arr, arr + n);

    int i = 0;

    for (int j = 1; j < n; j++)
    {

        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }

    return i + 1;
}
void leftshift(int arr[], int n)
{

    // sort(arr, arr+n);

    int last = arr[0];
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = last;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

void rotatebyk(int arr[], int n, int k)
{
    int temp[k];
    for (int i = n - k; i < n; i++)
    {
        temp[i - n + k] = arr[i];
    }

    for (int i = n - k - 1; i >= 0; i--)
    {
        arr[i + k] = arr[i];
    }

    for (int i = 0; i < k; i++)
    {
        arr[i] = temp[i];
    }
}

void linearsearch(int a[], int n, int k)
{
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            num = i;
            break;
        }
    }

    cout << num;
}

vector<int> unionsearch(int arr1[], int arr2[], int n, int m)
{

    set<int> st;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        st.insert(arr1[i]);
    }

    for (int i = 0; i < m; i++)
    {
        st.insert(arr2[i]);
    }

    for (auto &i : st)
    {
        v.push_back(i);
    }
    // for (auto &i : v)
    // {
    //     // v.push_back(i);
    //     cout << i;
    // }

    return v;

    // vector<int> temp;
    // for (int i = 0; i < n; i++)
    // {
    //     temp.push_back(arr1[i]);
    // }
    // for (int i = 0; i < m; i++)
    // {
    //     temp.push_back(arr2[i]);
    // }
    // int nz = temp.size();
    // for (int i = 0; i < nz; i++)
    // {
    //     cout << temp[i];
    // }
    // int temp[n];
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //       if(arr1[i] == arr2[j]){

    //       }
    //     }
    // }
    // for (int j = 0; j < m; j++)
    // {
    //     /* code */
    // }
}

vector<int> movezero(vector<int> arr, int n)

{

    // int temp[n];
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp.push_back(arr[i]);
        }
    }
    int nz = temp.size();
    for (int i = 0; i < nz; i++)
    {
        arr[i] = temp[i];
    }
    for (int i = nz; i < n; i++)
    {
        arr[i] = 0;
    }

    return arr;
}

void printmissing(int arr[], int n)
{
    // sort(arr, arr + n);
    int sum = (n * (n + 1)) / 2;

    int missing = 0;
    for (int i = 0; i < n - 1; i++)
    {
        missing += arr[i];
        // if (arr[i] != i)
        // {
        //     missing = i;
        // }
    }
    cout << sum - missing << endl;
}

void maxsumone(int arr[], int n)
{
    int maxx = 0;
    int one = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            one++;
        }
        else
        {
            one = 0;
        }

        maxx = max(maxx, one);

        // maxx = max(max, one);
    }
    // cout << one << endl;

    cout << one << endl;
}

int twise(int arr[], int n)
{
    // sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {

        int s = 0;
        int bum = arr[i];

        for (int j = 0; j < n; j++)
        {
            if (arr[j] == bum)
            {
                s++;
            }
        }
        if (s == 1)
        {
            return bum;
        }
    }

    // cout << s << endl;
}

int subarray(int arr[], int n, int k)
{
    int len = 0;
    for (int i = 0; i < n; i++)
    {
        int s = 0;
        for (int j = i; j < n; j++)
        {
            s += arr[j];
            if (s == k)
            {
                len = max(len, j - i + 1);
            }
        }
    }
    return len;
}
int main()
{

    // int n = 0;
    // // cin >> n;
    // int arr[] = {1, 0, 2, 3, 0, 4, 0, 1};

    int arr[] = {-1, 1, 1}; //{1,1,2,2,4}, //{1,2,2}
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    // int m = sizeof(arr2) / sizeof(arr2[0]);
    // int n = 5;
    //
    // int k = maxsumone(arr, n);
    // int k = twise(arr, n);
    // cout << k;

    // printmissing(arr, n);
    int k = subarray(arr, n, 1);
    cout << k << endl;
    // largest(arr, n);
    // isSorted(arr, n);
    // leftshift(arr, n);
    // int k = rmdup(arr, n);

    // int k = 5;

    // vector<int> x = unionsearch(arr, arr2, n, m);

    // for (auto &v : x)
    // {
    //     cout << v;
    // }
    // linearsearch(arr, n);

    // unionsearch(arr, n);

    // rotatebyk(arr, n, k);

    // vector<int> temp = movezero(a, 10);

    // for (int g = 0; g < n; g++)
    // {
    //     cout << arr[g];
    // }
}

// Yes am available for full time 40 hours a week
// 1 In my past internship i have lots of project related to frontend , backend, and wordpress;
// 2. IN this project I mostly used ReactJS as a frontend with latest Tailwins CSS and scss, and for backend i have used the NodeJS and ExpressJS, with lot of libraries in frontend and backend.   I this projects i worked of API integration API Calling and also creating some API for User input form. for database I have used the MYSQL database and for one project I have user the MONGODB.
// 3. for me the most challengin thing in this one project, which is calling API of google custome search, initially I just take API from gooogle json free API which fetch some seach data, but after I got clearity I have to fetch actual googled result page which is not possible because google dose not allow anyone to fetch the result page data, then i go with faq section of google api do some GPT and BARD research and colclude we have to sign bussiness model with google to fetch that data.

// 4. Component Driven Development is very popular way to reduce the amount of time to development we can easily use any react componet by just importing in our file NO need to write code again and again for same design/logic.

// 1. YES, I have gone through the hiring details
// // 2. I have a doubt about the salary, is it fixed or it is Negotiable?
// 3. YES i can start the work today itself. What
// 4. i am very comfortable to complete the assessment.