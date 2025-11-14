#include <bits/stdc++.h>
using namespace std;

int m[105][105] = {0},key[105][105] = {0},n,bil[105],tmp,mins;




int main(){
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        cin>>bil[i];
    }

    for (int d = 1; d <= n - 2 ; d++)
    {
        for (int i = 1; i < n - d; i++)
        {
    
            
            mins = 999999;
            int j = i +d;
            for (int k = i; k <= j-1; k++)
            {
                tmp = m[i][k] + m[k +1][j] + bil[i-1] * bil[k] * bil[j];
                if ( mins > tmp){
                    mins = tmp;
                    key[i][j] = k;
                }
                
            }
            m[i][j] = mins;
        }
        
    }
    for (int i = 1; i <= n-1; i++)
    {
        for (int p = 1; p <= n-1; p++)
        {
            cout<<key[i][p]<<" ";
        }
        cout<<endl;
        
    }
    
    cout<<m[1][n-1]<<endl;
    

  
    









    return 0;
}