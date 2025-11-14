#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,t;
    int arr[99999];
    cin>>n>>t;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<arr[t-1];







    return 0;
}