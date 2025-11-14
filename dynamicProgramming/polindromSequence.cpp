#include <bits/stdc++.h>
using namespace std;

int n,d,o,panjang,arr[55][55];
vector <int> jawaban;
string s;

void solve(){
    for (int i = 0; i < panjang; i++)
    {
        arr[i][i] = 1;
    }
    for (int i = 2; i <= panjang; i++)
    {
        for (int d = 0; d <= panjang - i; d++)
        {
           o = d + i -1;
            // cek jika == 2
            if (i == 2 && s[d] == s[o])
            {
                // cout<<"["<<d<<" "<<o<<"]"<<endl;

                arr[d][o] = 2;
            }else if(s[d] == s[o]){
                // cout<<"("<<d<<" "<<o<<")"<<endl;

                arr[d][o] = arr[d+1][o-1] +2;
            }else
            {
                // cout<<"{"<<d<<" "<<o<<"}"<<endl;
                arr[d][o] = max(arr[d+1][o],arr[d][o-1]);
            }
            
             
        }
        
    }
     jawaban.push_back( arr[0][panjang -1]);

}


int main(){

    cin>>n;
    for (int i = 0; i < n; i++)
    {
         cin>>s;
         panjang = s.length();
         solve();



        /* code */
    }
    for(auto x : jawaban)cout<<x<<endl;
    



    // for (int i = 0; i < panjang; i++)
    // {
    //     for (int d = 0; d < panjang; d++)
    //     {
    //         cout<<arr[i][d]<<" ";
    //     }
    //     cout<<endl;
        
    // }
    
    
    











    return 0;
}