#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

ll arr[300000];
int n,m; 
ll itung( ll x){
    ll hasil = 0;
    for (int i =0; i < n; i++)
    {
        hasil += x/arr[i];
    }
    return hasil;
}
ll binser(ll b){
    ll l = 1; ll r = (1ll<<60); ll ret=1;
    
    while(l<=r){
        ll mid = (l+r)/2;
        if (itung(mid)>= b){
            r = mid-1;
            ret = mid;
        }else{
            l = mid +1;
        }
        
    }
    return ret;
}
int main(){
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<binser(m+1) - binser(m);
    





}