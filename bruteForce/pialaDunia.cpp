#include<bits/stdc++.h>
using namespace std;

int n ;
int x;

int asal [10];
int hasil[10];


bool solve (int a , int b){
     bool temp = false;
    // cout<<"("<<a<<" "<<b<<")"<<endl;

     if (b > x)
        {
            // cout<<a<<b;
            // cout<<"masuk"<<endl;
            a++;
            b = a+1;
        }

    // base case 
    if(a >= x ){
        // cout<<" masuk akhir"<<endl;
        for ( int z = 0; z < x; z++)
        {
            // cout<<asal[z]<<"  "<<hasil[z]<<endl;
            if(asal[z] != hasil[z + 1]){
                // cout<<"false"<<endl;
                return false;
            }

        }
        // cout<<"true"<<endl;
        return true;
        
    }

            // jika b sudah melebihi batas

            // jika menang a
            hasil[a] += 3;
            // cout<<a<<"   "<<hasil[a]<<endl;
            temp |= solve(a , b + 1);
            hasil[a] -= 3;

            // jika a kalah
            hasil[b] += 3;
            temp |= solve(a , b + 1);
            hasil[b] -= 3;

            // jika imbang
            hasil[b] += 1;
            hasil[a] += 1;
            temp |= solve(a , b + 1);
            hasil[a] -= 1;
            hasil[b] -= 1;
          return temp;
        
    
    
    
    
}

int main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        for (int l = 0; l < x;l++)
        {
            cin>>asal[l];

        }
        if(solve(1,2)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
    






    return 0;
}