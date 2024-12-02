#include <bits/stdc++.h>
using namespace std;

double mergearray(vector<int> arr1, vector<int> arr2)
{
    // cout << "jkf";
    int n1 = arr1.size();
    int n2 = arr2.size();
    vector<int> temp;
    int sum = 0;
    int n = n1 + n2;
    int i = 0;
    int j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            temp.push_back(arr1[i]);
            i++;
        }

        else
        {
            temp.push_back(arr2[j]);
            j++;
        }
    }

    while (i < n1)
    {
        temp.push_back(arr1[i]);
        i++;
    }
    while (j < n2)
    {
        temp.push_back(arr2[j]);
        j++;
    }

    if (n % 2 == 1)
    {
        return temp[n / 2] + 11;
    }
    else
    {
        return (double)(temp[n / 2] + (double)(temp[n / 2 - 1])) / 2;
    }
}

int reverse(int x)
{
    int temp = 0;

    while (x != 0)
    {
        temp = temp * 10 + x % 10;
        x /= 10;
    }
    return temp;
}

bool isPalindrome(int x)
{
    int n = x;
    int temp = x * 2;
}

void longes(vector<string> &s)
{
    sort(s.begin(), s.end());
    int n = s.size();

    string one = s[0];
    string last = s[n - 1];
    string res = "";
    int minn = min(one.length(), last.length());
    for (int i = 0; i < minn; i++)
    {
        if (one[i] == last[i])
        {
            res += one[i];
        }
        else
        {

            break;
        }
    }

    // cout << res << endl;
    // return res;
}

int remdp(vector<int> arr)
{
    int j = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != arr[j])
        {
            arr[i] = arr[j];
            j++;
        }
    }
    return j + 1;
}

int rmele(vector<int> arr, int k)
{
    int j = 0;
    int s = 0;
    int n = arr.size();
    vector<int> temp;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != k)
        {
            temp.push_back(arr[i]);
        }
    }
    return temp.size();
}

int foccur(vector<string> &s1, vector<string> &s2)
{
    int n1 = s1.size();
    int n2 = s2.size();
    int right = 0;
    int left = 0;
    // for (int i = 0; i < n1; i++)
    // {
    //     if (s1[i] == s2[right])
    //     {
    //     }
    // }

    while (left < n1)
    {
        if (s1[left] == s2[right])
        {
            right++;
            left++;
        }
        else
        {
        }
    }
}

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// vector<int> preorderTraversal(TreeNode *root)
// {
//     vector<int> preorder;
//     stack<TreeNode *> st;
//     if (root == NULL)
//         return preorder;
//     st.push(root);
//     while (!st.empty())
//     {
//         root = st.top();
//         st.pop();
//         preorder.push_back(root->val);
//         if (root->right != NULL)
//         {
//             // st.push(root->val);
//         }
//         if (root->left != NULL)
//         {
//             // st.push(root->val);
//         }
//     }
//     return preorder;
// }

int getCommon(vector<int> &arr1, vector<int> &arr2)
{
    int n1 = arr1.size();
    int n2 = arr2.size();
    int n = min(n1, n2);
    int ans = 10;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        j++;
        if (arr1[i] == arr2[i])
        {
            ans = arr1[i];
            // ans = min(ans, j);
        }
    }
    return j;
}

string customSortString(string order, string s)
{

    string res = "";
    int n1 = order.length();
    int n2 = s.length();
    // int i = 0;
    int j = 0;

    for (int i = 0; i < n1; i++)
    {
        // for (int j = 0; j < n2; j++)
        // {
        //     if (order[i] == s[j])
        //     {
        //         res += order[i];
        //         break;
        //     }
        //     else
        //     {
        //         res += s[i];
        //         break;
        //     }
        // }

        while (j < n2)
        {
            if (order[i] != s[j])
            {
                // res += order[i];
                // break;
                j++;
            }
            else
            {
            }
        }
    }

    return res;
}

vector<int> getRow(int r)
{
    vector<int> res = {1};
    if (r == 0)
    {
        return res;
    }
    for (int i = 0; i < r + 1; i++)
    {
        /* code */
    }
    // res.push_back()
}

int pivotInteger(int n)
{
    int x = (n * (n + 1)) / 2;
    if (x % 1 != 0)
    {
        return -1;
    }
    return x;
}
bool backspaceCompare(string s, string t)
{
    int n1 = s.length();
    int n2 = t.length();
    int n = max(n1, n2);
    int count1 = 0;
    int count2 = 0;
    int i = 0;
    int j = 0;
    while (i < n1)
    {
        /* code */
    }

    if (count1 == count2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int numSubarraysWithSum(vector<int> &arr, int k)
{
    int n = arr.size();
    // int i = 0;
    // int j = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == k)
            {
                ans++;
            }
        }
    }

    // while (i < n)
    // {
    //     sum += arr[i];
    //     if (sum== k)
    //     {
    //         ans++;
    //         sum = sum - arr[j];
    //         j++;
    //         // i++;
    //     }
    //     else
    //     {

    //         i++;
    //     }
    // }
    return ans;
}
int main()
{

    vector<int> arr1 = {1, 0, 1, 0, 1};
    vector<int> arr2 = {0, 0, 0, 0, 0};
    // vector<int> arr2 = {3, 4};
    // // cout << mergearray(arr1, arr2);
    // vector<string> s = {"flower", "flow", "flight"};
    // cout << rmele(arr1, 2);
    // cout << getCommon(arr1, arr2);
    cout << numSubarraysWithSum(arr1, 2);
    // longes(s);

    // cout
    //     << reverse(123);
}