#include  <bits/stdc++.h>
using namespace std;
#define int long long
int n,dp[55] = {0};

int solve(int x){

    if (dp[x] != 0)
    {
        // cout<<dp[x]<<":"<<endl;
        return dp[x];
    }
    
    x-=2;
    int i = 0;
    while (i <= x)
    {    
    //  cout<<dp[x+2]<<endl;
   
     dp[x+2] += solve(i) * solve(x - i);
    //  cout<<dp[x+2]<<endl;

        i+= 2;
    }
    
        /* code */
        
    
    return dp[x+2];
    
}




signed main(){

    dp[0] = 1;
    dp[2] = 1;
    cin>>n;
    cout<<solve(n);

    // for (int i = 4; i <= n; i+=2)
    // {
    //     for (int j = 0; j <= i-2; j+=2)
    //     {
    //         dp[i] += dp[j] * dp[i - 2 - j];
    //     }
        
    // }
    // cout<<dp[n];
    
    
    

}