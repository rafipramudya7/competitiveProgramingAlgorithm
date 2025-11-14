#include <bits/stdc++.h>
using namespace std;

int n,m,arr1[10005],arr2[10005],itra,itrb,jawaban;

void solve(int a , int b){
    // cout<<"("<<a<<"  "<<b<<")"<<endl;
    if (a < 0 || b < 0)
    {
        cout<<jawaban;
        return;
    }else
    {
        //cek jika ada x+1
        if (arr1[a] + 1 == arr2[b] || arr1[a] == arr2[b])
        {
            jawaban++;
            return(solve(a -1 , b-1));
        }else if(arr1[a] < arr2[b]){

            return solve(a,b-1);
        }else{
           return solve(a -1 , b);
        }
    }
    

    
}
int main(){
    cin>>n>>m;
    itra = n -1;
    itrb = m-1;
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>arr2[i];
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    solve(itra,itrb);


    
    
    






    return 0;
}