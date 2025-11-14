#include <bits/stdc++.h>
using namespace std;


int n,t,tmp,terbesar  = 0;
int arr[50][50];

bool cek[50][50] = {false};
int par;



void solve(int x,int y){
    // if( x < 0 || x >= n || y < 0 || y >= n ){
    //     cout<<"ok"<<endl;
    //     return ;
    // }

        // cout<<x<<" "<<y<<endl;




    // buat jadi true
    cek[x][y] = true;
    tmp++;

    // cek atas
    if(cek[x][ y - 1] == false && arr [x][y-1] == par){
        solve(x,y-1);

    }

    // cek kiri
    if(cek [x-1][y] == false && arr[x-1][y] == par){
        solve(x-1,y);
    }


    // cek kanan 
    if (cek [x+1][y] == false && arr[x+1][y]==par)
    {
        solve(x+1,y);
        /* code */
    }

    // cek bawah
    if(cek[x][y+1] == false && arr[x][y+1] == par){
        solve(x,y+1);
    }

    


}
int main(){
    cin>>n>>t;

    for (int i = 0; i < n; i++)
    {
        for (int d = 0; d < t; d++)
        {
            cin>>arr[i][d];
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int d = 0; d < t; d++)
        {
            tmp = 0;
            if(cek[i][d]==true) continue;
            par = arr[i][d];
            solve(i,d);
            // cout<<tmp<<endl;
            if(tmp > terbesar ){

                terbesar = tmp;
            }
        }        
    }
    terbesar *= terbesar-1;
    // cout<<cek[-1][0];
    
    cout<<terbesar;
    
    







    return 0;
}