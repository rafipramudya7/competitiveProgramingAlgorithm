#include<bits/stdc++.h>
using namespace std;

int n,t,maxx;
int temp,temps[30];
bool cek[6][30][30];
string arr[30][30],arre[5][30][30];

void runtuh(int kel){
    
    for ( int i= 0; i < n; i++)
    {
        for (int j = 0; j < t; j++)
        {
            int l = i;
            int p = j;
            if(arre[kel][i][j] == "."){
                // cout<<"yes"<<endl;
                while(l!= 0){
                    swap(arre[kel][l][j],arre[kel][l-1][j]);

                    l--;
                }
            }
            /* code */
        }
        
    }

    // for ( int i= 0; i < n; i++)
    // {
    //     for (int j = 0; j < t; j++)
    //     {
    //         cout<<arre[kel][i][j]<<" ";

    //     }
    //     cout<<endl;
        
    // }

    return;
}


void ubah(int x , int y, int kes)
{
    temps[kes]++;

    
    // if( x < 0 || x >= n || y < 0 || y >= n ){
    //     cout<<"ok"<<endl;
    //     return ;
    // }

        // cout<<x<<" "<<y<<endl;
    // buat jadi true
        string par = arre[kes][x][y];

    arre[kes][x][y] = ".";
    cek[kes][x][y] = true;
        //     for (int i = 0; i < n; i++)
        // {
        //     for (int  c= 0; c < t; c++)
        //     {
        //      cout<<cek[kes][i][c]<<" ";

        //     }
        //     cout<<endl;
            
        // }
    if(x-1 >= 0){
        // cek atas
        if(arre[kes] [x-1][y] != "." && arre[kes][x-1][y] == par){
            ubah(x-1,y,kes);
        }

    }


    if(y-1>=0){
             // cek kiri
        if(arre[kes][x][y-1] != "." && arre[kes][x][y-1] == par){
            ubah(x,y-1,kes);
        }
    }

    // arre[kes] kanan
    if(arre[kes][x][y+1] != "." && arre[kes][x][y+1] == par)
    {
        ubah(x,y+1,kes);
    }


    // arre[kes] bawah 

    if (arre[kes][x+1][y] != "." && arre[kes][x+1][y] ==par)
    {
        // cout<<"masuk"<<endl;
        ubah(x+1,y,kes);
        /* code */
    }
    return;
    //     cout<<arre[kes][x+1][y]<<endl;
    // cout<<par<<endl;
    // cout<<cek[kes][x+1][y]<<endl;
    // cout<<"bawah"<<endl;
    // cek[x][!= ".";
}




void solve(int ke,string arrs[30][30],int baris,int kolom){
        // cek[ke][30][30] = {false};

    // cout<<"ya "<<ke<<endl;
            for (int i = 0; i < n; i++)
        {
            for (int  c= 0; c < t; c++)
            {
             cek[ke][i][c]= false;

            }

        }
    if (ke == 0){
        // cout<<"| "<<temp<<" |"<<endl;
        maxx = max(maxx,temp);
        return ;
    }
    // buat bool ke
    // if (ke == 0)
    // {
        // for (int i = 0; i < baris; i++)
        // {
        //     for (int  c= 0; c < kolom; c++)
        //     {
        //      cout<<arrs[i][c]<<" ";

        //     }
        //     cout<<endl;
            
        // }
        
    // }
    

    for (int i = 0; i < baris; i++)
    {
        for (int e = 0; e < kolom; e++)
        {
            temps[ke] = 0;
            // cout<<"{"<<"( "<<i<<","<<e<<") "<<cek[ke][i][e]<<arrs[i][e]<<"}"<<endl;
                if (cek[ke][i][e] == true || arrs[i][e] == ".")
            {
                continue;
            }else{
                // cout<<"( "<<arrs[i][e]<<" ," <<" )"<<endl;
            // copy(&arrs[0][0], &arrs[0][0]+n-1*t-1,&arre[ke][0][0]);
            for(int i = 0; i<baris ;i++){
                for(int c = 0 ; c< kolom ;c++){
                    arre[ke][i][c] = arrs[i][c];
                }
            }

            ubah(i,e,ke);
            // cout<<"dah"<<endl;


            runtuh(ke);
            
        //     for (int i = 0; i < baris; i++)
        // {
        //     for (int  c= 0; c < kolom; c++)
        //     {
        //      cout<<arre[ke][i][c]<<" ";

        //     }
        //     cout<<endl;
            
        // }
        // cout<<endl;
        temp += temps[ke] * (temps[ke]-1);
            solve(ke-1,arre[ke],baris,kolom);
        temp -= temps[ke] * (temps[ke]-1);

            }
            
        }
        
    }
    

}



int main(){
    cin>>n>>t;
    for (int i = 0; i < n; i++)
    {
        for (int z = 0; z <t ; z++)
        {
            cin>>arr[i][z];
        }
        
    }
    solve(2,arr,n,t);
    cout<<maxx;
    






    return 0;
}