#include <bits/stdc++.h>
using namespace std;



vector<int> SIEV(int m){
    vector<bool> eliminasi (m+1 , false);
    vector<int> prima;
    for (int i = 2; i <= m +1 ; i++)
    {
        if (eliminasi[i] == false)
        {
            prima.push_back(i);
            int j = i + i;
            while ( j<= m+1)
            {
                eliminasi[j]= true;
                j += i;
            }
            
        }
        
    }
    return prima;
    

}



int main(){
    vector<int> bilPrima = SIEV(999999);
    
   int t;
   int data[20001];
   cin>>t;
   for (int i = 1; i <= t; i++)
   {
    int x;
    cin>>x;
    data[i] = bilPrima[x-1];
   }
   for (int i = 1; i <= t; i++)
   {
    cout<<data[i]<<endl;
   }
  
   

   
  
   
    // cin>> t;
    // int pesanan [t];
    // t -= 1;
    // for ( int x = 0; x <= t ; x++)
    // {
    //     cin>>pesanan[x];
    // }
    // for (auto z : pesanan)
    // {
    //     cout<<bilPrima[z]<<endl;
    // }


    



}