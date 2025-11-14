#include <bits/stdc++.h>
using namespace std;

int n,a,jawaban;

vector <pair<int,pair<int,int>>> v;
 int parrent[105];

 int parent(int x ){
    if (parrent[x] == x)
    {
        return x;
        /* code */
    }
    parrent[x] = parent(parrent[x]);

    return parrent[x];
    
 }

bool cek(int x , int y){
    return parent(x) == parent(y);
}

void join(int x , int y){
    int para = parent(x);
    int parb = parent(y);
    parrent[para] = parb;
}


int main(){
    // persiapan 
    for (int i = 0; i < 103; i++)
    {
        parrent[i] = i;
        /* code */
    }
    
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin>>a;
            if (j > i)
            {
                v.push_back(make_pair(a,make_pair(i,j)));

                /* code */
            }
            
        }
        
    }
    sort(v.begin(),v.end());
    for(auto x : v){
        if (cek(x.second.first,x.second.second)) continue;
        join(x.second.first,x.second.second);
        jawaban += x.first;

        
    }
    cout<<jawaban<<endl;
    






    return 0;
}
/*   1 2 3
    1 0 1 2
    2 1 0 2
*/