#include <bits/stdc++.h>
using namespace std;




int t,tmp,patokan;
// bool sortbysec(const string &a,
//               const string &b)
// {
//     // return (a.second < b.second );

//   // if(a.second == b.second) return (a.first<b.first);
// }
// bool sortbysec(const pair<int,string> a , const pair<int,string> b){
//     if(a.length() < b.length()){
//         return a.length() < b.length();
//     }else
//     {
//         return a < b;
//     }
    
    
// }



int main(){
    vector<pair<int,string>>vect;
    string n;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        vect.push_back(make_pair(n.length(),n));
    }
    
    sort(vect.begin(),vect.end());
    
    
    
    for(auto x : vect){
        cout<<x.second<<endl;
    }
    

    







    return 0;
}