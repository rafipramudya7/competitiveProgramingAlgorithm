#include <bits/stdc++.h> 

using namespace std;
int t,n,m,tmp=0;
string s;
 vector <pair<pair<int,int>, pair<int,string>>> v(80);
 string arr[85];
 
 

bool cek(int e,string strink){
    
    for(int i =0  ; i<=e ; i++){
        // cout<<"string "<<v[i].second.second <<endl;
        if (v[i].second.second == strink){
            return true;
        } 
    }
    return false;
}


int main(){
    cin>>t;
    for(int i = 0 ; i<t;i++){
        cin>>n>>m;
        cin>>s;
        for(int j = 0 ; j< n;j++){
            cin>>v[j].second.second>>v[j].second.first>>v[j].first.second>>v[j].first.first;
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        
         if(cek(m-1,s)){
             arr[tmp] = "YA";
            //  cout<<v[m-1].second.second<<endl;
         }else{
           arr[tmp] = "TIDAK";

        //   cout<<v[m-1].second.second<<endl;
        //   cout<<s;

         }
         tmp++;

    }
    for(int i = 0; i<t;i++){
        cout<<arr[i]<<endl;
    }
return 0;
}