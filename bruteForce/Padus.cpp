#include <bits/stdc++.h>
using namespace std;

int n,m,arr[10005],nbesar,nkecil,sizekecil,sizebesar;
vector<int> jawaban;


void solve(int tmp,int nk,int nb){
// base caes(jika nk + nb == 1)
if (nb + nk == 1)
{
    for(auto i : jawaban)cout<<i<<" ";
    exit(0);
}


// cek jika kecil
 
        
    if(arr[tmp+sizekecil -1] != arr[tmp+sizekecil] && nk>0){
        jawaban.push_back(arr[tmp +sizekecil -1]+1);
         solve(tmp + sizekecil,nk -1 ,nb);
        jawaban.pop_back();
    }
    if(arr[tmp+sizebesar -1] != arr[tmp+sizebesar] &&  nb>0 ){
        jawaban.push_back(arr[tmp +sizebesar -1]+1);
         solve(tmp + sizebesar,nk  ,nb-1);
        jawaban.pop_back();
    }
    return;

}

int main(){

    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>m;
    sort(arr,arr+n);
    // for(auto i : arr)cout<<i<<endl;

    nbesar = n%m;
    nkecil = m - nbesar;
    sizekecil = n / m;
    sizebesar = sizekecil + 1;
    solve(0,nkecil,nbesar);

    // cek
    /*
    
    nbesar 1
    nkecil 3
    sizekecil 2
    sizze besar 3

    (1) tmp = 0 , 3,1
      (2) tmp = 1,2,1
      5
      
21
22

24
26
26

28
211
500

21

22
24

26
26

28

211
500


    
    
    */




}