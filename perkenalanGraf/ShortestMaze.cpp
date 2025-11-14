#include <bits/stdc++.h>
using namespace std;




int arr[105][105],n,m,jalan,nodeNext,sr,sc,r,c;
bool visited[105][105] = {false},ketemu = false;
int sisa = 1;
int parc[5] = {-1,0,1,0};
int parr[5]  ={0,-1,0,1};


queue <int> qr;
queue <int>qc;

void cekTetangga(int x , int y){


    // cek keempat tetangga 
    for (int i = 0; i < 4; i++)
    {
        r = x + parr[i];
        c = y + parc[i];
        // jika visited false dan tidak melewati batas 
        if (r < n && r >= 0 && c >= 0 && c <m)
        {
            // cek jika sudah pernah dikunjungi atau itu tembok
            if (visited[r][c] == false && arr[r][c] != -1)
            {
                qr.push(r);
                qc.push(c);
                visited[r][c] = true;
                nodeNext++;
            }
            
        }


        
    }
    

}

int solve(){
    qr.push(r);
    qc.push(c);

    visited[r][c] = true;

 

    // cek sambai queue habis
    while (qr.size() != 0)
    {
        // ambil antrian terdepan
         sr = qr.front();
         sc = qc.front();
        //  cek jika itu goal 
        if (arr[sr][sc] == 2)
        {
            ketemu = true;
            break;
        }
        
        // hapus antrian 
        qr.pop();
        qc.pop();
    
        // cek tetangga nya
        cekTetangga(sr,sc);

        
        sisa--;
        // cek jika node pada level tersebut haabis
        if (sisa == 0)
        {
            sisa = nodeNext;
            nodeNext = 0;
            jalan++;
        // for (int i = 0; i < n; i++)
        // {
        //     for (int d = 0; d < m; d++)
        //     {
        //         cout<<visited[i][d]<<" ";

        //     }
        //     cout<<endl;
            
        // }
        // cout<<endl;
        }
        

        
    }
    if (ketemu == true)
    {
        return jalan;
    }else{
        return -1; 
    }
    
    


}
int main(){
    cin>>n>>m;

    for (int i = 0; i <n; i++)
    {
        for (int d = 0; d < m; d++)
        {
            cin>>arr[i][d];
            // cek jika tepi
            if (i == 0 || i == n -1 ||d == 0 || d == m -1 )
            {
                if (arr[i][d] == 0)
                {
                    arr[i][d] = 2;
                    // cout<<"("<<i+1<<" "<<d+1<<")"<<endl;
                }
                
            }
            
        }
        
    }


    cin>>r>>c;
    r -= 1;
    c -= 1;
    cout<<solve() +1<<endl;
    return 0;
}