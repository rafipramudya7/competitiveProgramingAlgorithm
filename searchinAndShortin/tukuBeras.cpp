#include <bits/stdc++.h>
using namespace std ;

vector<pair<double,int>> vect;

// int biaya(const pair<double,int> &vects ,int batasan ){
//     double biaya;
//     for(auto itr : vects){
//         int m = itr.second;
        
//         while (m != 0 && batasan != 0)
//         {
//             biaya += itr.first;
//             batasan--;
//             m--;
//         }
        
//     }
//     cout<< biaya;
// }

int n,batasan,temp[99999];
int b = 0;
int main(){
    cin>>n>>batasan;
      cout<<fixed;
    cout<<setprecision(5);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        temp[b] =x;
        b++;
    }
    for (int i = 0; i < n; i++)
    {
        double y;
        double x;
        cin >> x;

        y = x / temp[i];
        vect.push_back(make_pair(y,temp[i]));
    }
    sort(vect.rbegin(), vect.rend());
    
    double biaya;
    for(auto itr : vect){
        int m = itr.second;
        
        while (m != 0 && batasan != 0)
        {
            // cout<< itr.first<< "   ";
            biaya += itr.first;
            batasan--;
            m--;
        }
        
    }
  
    cout<< biaya;
    





    return 0;
}