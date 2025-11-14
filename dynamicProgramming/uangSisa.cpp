#include <bits/stdc++.h>
using namespace std;

#define ll long long


int arr[50005];
int n,k,chace[50005];
bool cek[50005] = {false};



int solve(int x){
    // cout<<x<<endl;

    if (x == 0)
    {
        return 0;
    }

    if (cek[x] == true)
    {
        return chace[x];
    }
    bool utama = false;


    
    int res = 50005;

    for (int i = 0; i < n; i++)
    {
        if (x >= arr[i] )
        {
            utama = true;
            res  = min(res,solve(x - arr[i])+1);

        }
        
    }

    
    cek[x] = true;
    chace[x] = res;
    return res;
    
    
}



int main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];

    }
    cin>>k;
    sort(arr,arr+n);
    // for(auto x : arr)cout<<x<<" "<<endl; 
    int tmp = solve(k);
    if(tmp == 50005){
        cout<<-1<<endl;
    }else
    {
        cout<<tmp<<endl;
    }
    


    









    return 0;
}