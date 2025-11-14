#include <bits/stdc++.h>
using namespace std;
int n,t,tmp,temp,terbesar;
string par;

bool cek [5][30][30];
string arrTmp[5][30][30],arr[30][30];

void solve(int x,int y, int kes){
    // if( x < 0 || x >= n || y < 0 || y >= n ){
    //     cout<<"ok"<<endl;
    //     return ;
    // }

        // cout<<x<<" "<<y<<endl;
    // buat jadi true
    
    arr[x][y] = ".";
    cek[kes][x][y] = true;
    tmp++;

    if(x-1 >= 0){
        // cek atas
        if(arr [x-1][y] != "." && arr[x-1][y] == par){
            solve(x-1,y,kes);
        }

    }


    if(y-1>=0){
             // arr atas
        if(arr [x-1][y] != "." && arr[x-1][y] == par){
            solve(x-1,y,kes);
        }
    }

    // arr kanan
    if(arr[x][y+1] != "." && arr[x][y+1] == par)
    {
        solve(x,y+1,kes);
    }


    // arr bawah 
    if (arr [x+1][y] != "." && arr[x+1][y]==par)
    {
        solve(x+1,y,kes);
        /* code */
    }
    // cout<<"bawah"<<endl;
    // cek[x][!= ".";
    return;
}
void runtuh(){
        // for(auto jk : terbesarr){
        // arr[jk.first][jk.second] = ".";

    for ( int i= 0; i < n; i++)
    {
        for (int j = 0; j < t; j++)
        {
            int l = i;
            int p = j;
            if(arr[i][j] == "."){
                // cout<<"yes"<<endl;
                while(l!= 0){
                    swap(arr[l][j],arr[l-1][j]);

                    l--;
                }
            }
            /* code */
        }
        
    }
        
    

}

void utama(string arrs[30][30],int hitungan,int ke){
    // masukan ke arrtmp
copy(&arrs[0][0], &arrs[0][0]+n-1*t-1,&arrTmp[ke][0][0]);
// masukan cek;
    cek[ke] [50] [50] = {false};

    // base case
    if(ke == 0){
        // 
        if(temp >= terbesar){
            terbesar = temp;
        }
            for (int i = 0; i < n; i++)
            {
                for (int d = 0; d < t; d++)
                {
                    cout<<arr[i][d]<<" ";
                }
                cout<<endl;
                
            }
            cout<<endl;

        return;
    }

 for (int i = 0; i < n; i++)
    {
        for (int d = 0; d < t; d++)
        {
           if(cek[ke][i][d] == true )continue;
            // for (int i = 0; i < n; i++)
            // {
            //     for (int d = 0; d < t; d++)
            //     {
            //         cout<<tumbal[i][d]<<" ";
            //     }
            //     cout<<endl;
                
            // }
            // copy arr ke arr ke-

            copy(&arrTmp[ke][0][0], &arrTmp[ke][0][0]+30*30,&arr[0][0]);

            if(arr[i][d]==".") continue;
            par = arr[i][d];
            tmp =0;
            solve(i,d,ke);
            temp += tmp;
            runtuh();

            // for (int i = 0; i < n; i++)
            // {
            //     for (int d = 0; d < t; d++)
            //     {
            //         cout<<arr[i][d]<<" ";
            //     }
            //     cout<<endl;
                
            //           
           utama(arr,temp,ke-1);
           temp -= tmp;
        }        
    }


    // else

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
    utama(arr,0,2);
    








    return 0;
}