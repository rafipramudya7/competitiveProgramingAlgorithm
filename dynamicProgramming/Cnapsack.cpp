#include <bits/stdc++.h>
using namespace std;
int n,k,h,w;
int best,besk;
vector <pair<int,int>> arr;
string karakter[105][2005] = {""};
string bek;

int dp[105][2005]={0};
void solve(){
    for (int i = 1; i <= k; i++)
    {
        for (int j = 0; j <= n; j++)
        {

            best = dp[i-1][j];
                        // cout<<dp[i - 1][j-arr[i-1].first]<<endl;

            if (arr[i-1].first <= j)
            {
               best =  max(best,dp[i-1][j-arr[i-1].first] + arr[i-1].second);
            }
            dp[i][j] = best;
 
        
      }
 
    } 
    int tmp = 0;
    int par = dp[k][n];

    for(int i = n ; i >= 0 ; i--){
        // cout<<i<<endl;
        if(dp[k][i] != par){
            
            tmp = i+1;
            break;
        }
    }
    
    int p = k; 
    vector <int> jawaban;
    while(tmp >0 && p > 0){
        if(dp[p][tmp] == dp [p-1][tmp]){
            p--;
        }else{
            jawaban.push_back(p);
            tmp -= arr[p-1].first;
            p--;
            
        
        }
    }
    sort(jawaban.begin(),jawaban.end());
    for(auto x : jawaban)cout<<x<<endl;

}


int main(){
    cin>>n>>k;
    for (int
     i = 0; i < k; i++)
    {
        cin>>w>>h;
        arr.push_back(make_pair(w,h));
    }
    solve();
    //   for (int i = 0; i <= k; i++)
    // {
    //     for (int j = 0; j <= n; j++)
    //     {
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
        
    // }
    /*
    
0 1 2 3 4 5 6 7 8 9 10 11    
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 0 0 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 
0 0 0 0 0 0 0 0 0 0 0 2 2 2 2 2 2 2 2 2 2 2 2 4 4 4 4 4 4 4 4 
0 0 0 0 0 0 0 0 0 0 0 2 2 2 2 2 2 2 2 2 2 2 2 4 4 4 4 4 4 4 4 
0 0 0 0 0 0 0 0 0 0 0 2 2 2 2 2 2 2 2 2 2 2 2 4 4 4 4 4 4 4 4 
    
0 0 0 0 0  0  0  0  0   0   0 0 
0 0 0 0 0  0  0  0  0   0  30 30 
0 0 0 0 0  0 17 17  17 17  30 30 
0 0 0 0 0 14 17 17  17 17  30 31 
    
    */










    return 0;
}