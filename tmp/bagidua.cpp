#include <bits/stdc++.h>
using namespace std;
#define int long long
int dp[1000005];
bool cek[1000005];
int tmp,n,t,a,b;
int maxi = 1000000007;

int solve (int x){
    // cek jikaa pernh dikunjungi
    if (cek[x])
    {
        return dp[x];
        /* code */
    }
    
    
    dp[x] = (solve(x-2) % maxi+solve(x-3)% maxi)%maxi;
    cek[x] = true;
    return dp[x];
    

}
signed  main(){
    cin>>t;
    while(t--){
    cin>>n;
    cek[0] = cek[1] =  cek[2] = cek[3] =true;
    dp[0] = dp[1] = 0;
    dp[2] =1;
    dp[3] = 1;
    cout<<solve(n)<<endl;

    }




}