#include <bits/stdc++.h>


using namespace std;
#define pi pair<int,int>
int n,e,q,a,b,c;
int maxi = 100000000;
int jawaban;
int pertanyaan[505];
vector<pair<int,int>> v [205];
pair <int,int> tmp;
// element pertama node tujuan kedua cost

int solve(int x,int y){
    // cout<<x<<" "<<y<<")"<<endl;
    // if (visited[x])retur;
    int dist[205];
    bool visited [205];

    for (int i = 0; i < 203; i++)
    {
        dist[i] = maxi;
        visited[i] = false;
        /* code */
    }
    
    dist[x]=0;
    // visited[x] = true;
    
    priority_queue <pi,vector<pi>,greater<pi>>pq;
    // element pertama dist kedua node nya
    pq.push(make_pair(dist[x],x));

    while(!pq.empty()){
        // cout<<"-------------------"<<endl;


        tmp = pq.top();
        pq.pop();
        if(visited[tmp.second])continue;

        visited[tmp.second] = true;
        if (visited[y])
        {
            // cout<<dist[y]<<endl;
            return dist[y];
            /* code */
        }

        // cek element setiap tetangga node
        for(auto x : v[tmp.second]){

            int asal = dist[tmp.second];
            int tujuan = dist[x.first];
            int cost = x.second;
            if(visited[x.first])continue;
            // cout<<x.first<<":"<<endl;


            // relax
            if (tujuan > asal + cost)
            {
                dist[x.first] = asal +cost;
                pq.push(make_pair(dist[x.first],x.first));
                /* code */
            }
            

        }
    }


    
}

int main(){
    cin>>n>>e>>q;
    // input edge
    for (int i = 0; i < e; i++)
    {
        cin>>a>>b>>c;
        v[a].push_back(make_pair(b,c));
        v[b].push_back(make_pair(a,c));
        /* code */
    }
    for (int i = 0; i < q; i++)
    {
        cin>>pertanyaan[i];

        if (i != 0 )
        {
            jawaban += solve(pertanyaan[i-1],pertanyaan[i]);
            /* code */
        }
        
        /* code */
    }
    cout<<jawaban<<endl;
    
    
    







    return 0;
}