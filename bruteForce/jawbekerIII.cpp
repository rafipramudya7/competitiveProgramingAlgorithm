#include <bits/stdc++.h>
using namespace std;


int n,t,tmp,terbesar,p = 0;
int arr[50][50];

bool cek[50][50] = {false};
int par;
int k,l;
vector <pair<int,int>> terbesarr;
 vector<pair<int,int>> vect;
 string hasil[50][50];



void solve(int x,int y){
    // if( x < 0 || x >= n || y < 0 || y >= n ){
    //     cout<<"ok"<<endl;
    //     return ;
    // }

        // cout<<x<<" "<<y<<endl;
    vect.push_back(make_pair(x,y));
    // buat jadi true
    cek[x][y] = true;
    tmp++;

     // cek atas
    if(cek [x-1][y] == false && arr[x-1][y] == par){
        solve(x-1,y);
    }
            // cout<<"atas"<<endl;


    // cek kiri
    if(cek[x][ y - 1] == false && arr [x][y-1] == par){
        // cout<<"ya"<<endl;
        solve(x,y-1);
        
    }
            // cout<<"kiri"<<endl;


    

    // cek kanan
    if(cek[x][y+1] == false && arr[x][y+1] == par)
    {
        solve(x,y+1);
    }
            // cout<<"kanan"<<endl;


    // cek bawah 
    if (cek [x+1][y] == false && arr[x+1][y]==par)
    {
        solve(x+1,y);
        /* code */
    }
    // cout<<"bawah"<<endl;
    return;
}
int main(){
    ostringstream str1;

    cin>>n>>t;

    for (int i = 0; i < n; i++)
    {
        for (int d = 0; d < t; d++)
        {
            cin>>arr[i][d];
        // str1 << arr[i][d];

            hasil[i][d] = to_string(arr[i][d]);
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int d = 0; d < t; d++)
        {

            tmp = 0;
            vect.clear();
            if(cek[i][d]==true) continue;
            par = arr[i][d];
            // cout<<par<<endl;
            solve(i,d);
            // cout<<tmp<<endl;
            if(tmp >= terbesar ){

                terbesar = tmp;
                terbesarr = vect;


            }
        }        
    }
    // terbesar *= terbesar-1;
    // cout<<cek[-1][0];
    
    // cout<<terbesar;
    for(auto jk : terbesarr){
        hasil[jk.first][jk.second] = ".";
        
    }
    
    for ( int i= 0; i < n; i++)
    {
        for (int j = 0; j < t; j++)
        {
            l = i;
            p = j;
            if(hasil[i][j] == "."){
                // cout<<"yes"<<endl;
                while(l!= 0){
                    swap(hasil[l][j],hasil[l-1][j]);
                    l--;
                }
            }
            /* code */
        }
        
    }
    for ( int i= 0; i < n; i++)
    {
        for (int j = 0; j < t; j++)
        {
            cout<<hasil[i][j]<<" ";
            }
            cout<<endl;/* code */
        }
        
    
    

    
    







    return 0;
}