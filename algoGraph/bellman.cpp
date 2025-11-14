#include <bits/stdc++.h>
using namespace std;

#define int long long
int t,a,i,c,n,e,b;
int maxi = 1000000000;
vector <pair<pair<int,int> ,int>> v ;
int dist[505];
int cost [505];
bool cek;
// element pertama node pertama kedua node keduaa

void clear(){
    v.clear();
    for (int i = 0; i < 503; i++)
    {
        dist[i] = maxi;
        /* code */
    }
    
}


signed main(){
    cin>>t;
      while(t--){
       clear();
        
        cin>>n>>e;
        for (int i = 0; i < e; i++)
        {
            cin>>a>>b>>c;
            v.push_back(make_pair(make_pair(a,b),c));
            /* code */
        }
        
        dist[0] = 0;
        sort(v.begin(),v.begin() + e);
        cek = true;
        for (int i = 0; i <= n; i++)
        {
            cek = false;
            for(auto x : v){
                // cout<<dist[x.first]<<"****"<<dist[x.second]<<endl;

                // relax
                // jika daerah hasil 
                if (dist[x.first.first] != maxi && dist[x.first.second] > dist[x.first.first] + x.second)
                {
                    cek = true;
                    dist[x.first.second] = dist[x.first.first] + x.second;
                    /* code */
                }
                // for(int y = 0 ; y < n ; y++ )cout<<dist[y]<<" :"<<endl;
                // cout<<"---------------"<<endl;
            }
             if (!cek)break;
 
        }
      
        if (cek)
        {
            cout<<"Pak Dengklek tidak mau pulang"<<endl;
        }else if (dist[n-1] == maxi)
        {

            cout<<"Tidak ada jalan"<<endl;
            /* code */
        }else
        {
            cout<<dist[n-1]<<endl;
        }
      }
        
        return 0;
        }