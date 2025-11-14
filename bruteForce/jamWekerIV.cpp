#include <bits/stdc++.h>
using namespace std;


int n,t,tmp,terbesar,p,sampai = 0;
string arr[50][50];

string par;
int k,l;
string arrAwal[50][50];
bool cek[50][50];

string hasil[50][50];
void runtuh(){
        // for(auto jk : terbesarr){
        // arr[jk.first][jk.second] = ".";

    for ( int i= 0; i < n; i++)
    {
        for (int j = 0; j < t; j++)
        {
            l = i;
            p = j;
            if(arr[i][j] == "."){
                // cout<<"yes"<<endl;
                while(l!= 0){
                    swap(arr[l][j],arr[l-1][j]);
                    // swap(cek[l][j],cek[l-1][j]);

                    l--;
                }
            }
            /* code */
        }
        
    }
        
    

}


void solve(int x,int y){
    // if( x < 0 || x >= n || y < 0 || y >= n ){
    //     cout<<"ok"<<endl;
    //     return ;
    // }

        // cout<<x<<" "<<y<<endl;
    // buat jadi true
    
    arr[x][y] = ".";
    cek[x][y] = true
    tmp++;

    if(x-1 >= 0){
        // cek atas
        if(arr [x-1][y] != "." && arr[x-1][y] == par){
            solve(x-1,y);
        }

    }


    if(y-1>=0){
             // arr atas
        if(arr [x-1][y] != "." && arr[x-1][y] == par){
            solve(x-1,y);
        }
    }

    // arr kanan
    if(arr[x][y+1] != "." && arr[x][y+1] == par)
    {
        solve(x,y+1);
    }


    // arr bawah 
    if (arr [x+1][y] != "." && arr[x+1][y]==par)
    {
        solve(x+1,y);
        /* code */
    }
    // cout<<"bawah"<<endl;
    // cek[x][!= ".";
    return;
}



void utama(int j,string tumbal[50][50],int temp,bool pe[50][50]){
    if(j = 0){
        if(temp>=terbesar){
            terbesar = temp;
            for (int i = 0; i < n; i++)
            {
                for (int d = 0; d < t; d++)
                {
                    cout<<tumbal[i][d]<<" ";
                }
                cout<<endl;
                
            }
            cout<<endl;
            
        }
        
        return;
    }

         cek = {false};

    for (int i = 0; i < n; i++)
    {
        for (int d = 0; d < t; d++)
        {


            if(cek[i][d] == true )continue;
            copy(begin(tumbal),end(tumbal),begin(arr));


            if(arr[i][d]==".") continue;
            par = arr[i][d];
            // cout<<par<<endl;
            tmp =0;
            solve(i,d);
            temp += tmp;


           runtuh();


           utama(j-1,arr,temp,cek);
           temp -= tmp;
        }        
    }
                        copy(begin(pe),end(pe),begi(cek));


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
    utama(2,arr,0);
/*
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
*/

    
// keluarkan
/*
    for ( int i= 0; i < n; i++)
    {
        for (int j = 0; j < t; j++)
        {
            cout<<hasil[i][j]<<" ";
            }
            cout<<endl;
        }
        
*/  
    

    
    







    return 0;
}
/*
Task
utama function
runtuh function
solve function

*/