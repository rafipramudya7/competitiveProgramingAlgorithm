#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll n,q,x,tmp,arr[100005];
int main() {
cin>>n;
for (int i = 0; i < n; i++)
{
    int inp;
    cin>>inp;
    tmp+= inp;
    arr[i] = tmp;
}
cin>>q;
for (int i = 0; i < q; i++)
{
    cin>>x;
    ll jawaban = lower_bound(arr,arr+n,x) - arr;
    cout<<jawaban + 1<<endl;
}






}