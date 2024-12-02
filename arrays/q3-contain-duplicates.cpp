#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i]; 
    }
    for (int i = 0; i < n; i++)
    {
        int pivot = a[0];
        if(a[i+1] == pivot){
            cout<<"false"<<endl;
        }
        else{
            cout<<"true"<<endl;
        pivot++;
        }
    }
    
}