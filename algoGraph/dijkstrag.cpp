#include <bits/stdc++.h>
using namespace std;

#define pi pair<int,int>
#define int long long

int v,e,strt,fnsh,x,y,z;

long long dist[2505];
bool visited[2505];
pair <int,int> tmp;
priority_queue<pi,vector<pi>,greater<pi>> pq;
vector <pair<int,int>> adj[2505];
// pair pertama node kedua beban



signed main(){
    for(int i =0 ; i< 2505 ; i++){
        dist[i] = 1000000000;
    }



    cin>>v>>e>>strt>>fnsh;


    for (int i = 0; i < e; i++)
    {
        cin>>x>>y>>z;
        adj[x].push_back(make_pair(y,z));
        adj[y].push_back(make_pair(x,z));
        /* code */
    }
    dist[strt] = 0;
    pq.push(make_pair(0,strt));

    while (!pq.empty())
    {
         tmp = pq.top();
        //  cout<<tmp.second<<"{"<<endl;
        // pertama cost keduaa node
        pq.pop();

        // visited node
        if (visited[tmp.second] )
        {
            continue;
            /* code */
        }
        visited[tmp.second] = true;
        if(visited[fnsh]){
            cout<<dist[tmp.second]<<endl;
            exit(0);
        }

        for(auto x : adj[tmp.second]){
            // cout<<x.first<<endl;
    // cout<<"P"<<endl;
            // cek jika pernah dikunjingi
            if ( visited[x.first])
            {
                continue;
                /* code */
            }
            
            // cek jika lebih besar
            // dist bawaan
            int tambahan = dist[tmp.second] + x.second;
            int asli = dist[x.first];
            if (asli > tambahan)
            {
                dist[x.first] = tambahan;
                pq.push(make_pair(dist[x.first],x.first));
                /* code */
            }
            
        }
        

        /* code */
    }

    cout<<dist[fnsh]<<endl;
    
    
}