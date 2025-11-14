#include <bits/stdc++.h>
using namespace std;



int n,arr[1005];


int main(){
    int n;
    cin>>n;
    arr[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        arr[i] = max(i, arr[i/2] + arr[i/3] + arr[i/4]);
    }
    cout<<arr[n];
    return 0;
}