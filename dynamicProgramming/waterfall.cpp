#include <bits/stdc++.h>
using namespace std;
#define int long long
int v1,v2,h1,h2,v,h,n,arr[505][505] = {0},cek[505][505],pajak;


int solve(int x , int y){
    // cout<<"{"<<x<<" "<<y<<"  "<<cek[x+1][y]<<"}";
    cek[x][y] = 1;
    // jika pernah dilewati
    if (cek[x][y] == 1)
    {
        
    }
    

    // cek jika melampui batas
    if (y <= 0 || x>v || y>h )
    {
        // cout<<"ok"<<y<<" "<<x<<" "<<v<<" "<<h <<endl;
        return 0;
    }

    // cek jika pernah dikerjakan
    if (arr[x][y] !=  0 && arr[x][y] != -1)
    {
            //  cout<<"masuk222"<<endl;
      pajak += arr[x][y];
        return arr[x][y];

    }


    // cek sampaai batu hilang
    if (cek[x+1][y] == -1)
    {
        // cout<<"masuk"<<endl;
        int l = y-1;
        int r = y+1;
        // cari batas kiri sampai tidak ada batu
        while (cek[x+1][l] == -1)
        {
            l--;
        }


        // cari batas kanan
        while (cek[x+1][r] == -1)
        {
            r++;
        }
        arr[x][y] = solve(x,l) + solve(x,r) + 1;
        cek[x][y] = 1;
        return arr[x][y];
        
    }
    // turunkan kebawah 
    arr[x][y] = solve(x+1,y);
    cek[x][y] = 1;
    return arr[x][y];
}


signed main(){
cin>>v>>h>>n;
for (int z = 0; z < n; z++)
{
    cin>>v1>>h1>>v2>>h2;
    for (int i = v1; i <= v2; i++)
    {
        for (int j = h1; j <= h2 ; j++)
        {
            cek[i][j] = -1;
        }
        
    }
    
}

int jawaban = 0;
// for (int i = 0; i <= v; i++)
// {
//     for (int j = 0; j <= h; j++)
//     {

//         cout<<cek[i][j]<<" ";
//     }
//     cout<<endl;
    
// }
for (int i = 1; i <= h; i++)
{
    pajak = 0;
    jawaban = max(jawaban,solve(0,i) );
    // cout<<pajak<<" "<<i<<endl;
}
cout<<jawaban<<endl;

// for (int i = 0; i <= v; i++)
// {
//     for (int j = 0; j <= h; j++)
//     {
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
    
// }













    return 0 ;
}