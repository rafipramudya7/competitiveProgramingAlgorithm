#include <bits/stdc++.h>
using namespace std;
#define int long long

int t,n,e,q,r,tmp,tmp2,hasil;
vector <vector<int>> arr(50005);
int nd1[200005],nd2[200005];
bool khusus[200005],hilang[200005],cek[200005] = {false};
    queue <int> qn;


int bfs(int x){
    int nkusus = 1;
    qn.push(x);
    while (qn.size() != 0)
    {
        tmp2 = qn.front();
        cek[tmp2] = true;
        // push tiap jalan
        for(auto j:arr[tmp2]){
            // cek jika belum pernah dikunjungi
            // cout<<j<<"()"<<endl;
            if(cek[j] == true)continue;
            qn.push(j);
            if (khusus[j] ==  true)nkusus++;
            cek[j] = true;
        }
        
        qn.pop();
    }

    return nkusus;
}
void bersih(){
   for (int i = 0; i < n; i++)
   {
   
    cek[i] = false;
    khusus[i] = false;
    arr[i].clear();
   }
   
    
}

void solve(){


    cin>>n>>e>>q>>r;
    bersih();
    for (int i = 0; i <e ; i++)
    {
        hilang[i] = false;
        /* code */
    }
    
    hasil = q*(q-1);
    hasil /= 2;
    // cout<<hasil<<" }"<<endl;

// deskripsi edge
    for (int i = 0; i < e; i++)
    {
        cin>>nd1[i]>>nd2[i];

        /* code */
    }
// inpokan node khusus
    for (int i = 0; i < q; i++)
    {
        cin>>tmp;
        khusus[tmp-1] = true;
    }
    // hilangkan yang ke brapa

    for (int i = 0; i < r; i++)
    {
        cin>>tmp;
        hilang[tmp-1] = true;
    }

    // masukan jalannnya
    for (int i = 0; i < e; i++)

    {
        if ( !hilang[i] ) 
        {
            // masukan
            arr[nd1[i] - 1].push_back(nd2[i]-1);
            arr[nd2[i] - 1].push_back(nd1[i] - 1);
            /* code */
        }
        
    }
    
    // for(int i = 0 ; i< e ; i++){
    //     cout<<"node"<<i<<" ";
    //     for(auto x : arr[i])cout<<x<<" ";
    //     cout<<endl;
    // }
    // cout<<endl;
    
    // bfs tiap node
    for ( int i = 0; i < n; i++)
    {
        if (cek[i] == true) continue;
        if(khusus[i] == false) continue;
        int tmp = bfs(i) ;
        tmp = tmp*(tmp-1)/2;
        hasil -= tmp;
        
        // cek bfs yang node khusus

        
        
    }
    cout<<hasil<<endl;
    
    
    
}

signed main(){

    cin>>t;
    while (t--)
    {
    solve();
    }
    





    return 0;
}