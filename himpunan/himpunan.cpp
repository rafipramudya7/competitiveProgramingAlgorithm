#include <bits/stdc++.h>
using namespace std;

int arr[100005],n,q,tmp,par1,par2;

int cari(int a){
    // cek jika sama velue
    if (a == arr[a])
    {
        return a;
    }else
    {
        arr[a] = cari(arr[a]);
        return arr[a];
    }
}

void join(int a,int b){
    par1 = cari(a);
    par2 = cari(b);
    arr[par1] = par2;



}

void cek(int a, int b){
    if (cari(a) == cari(b))
    {
        cout<<"Y"<<endl;        /* code */
    }
    else
    {
        cout<<"T"<<endl;
    }
    
    


}


int main(){
    cin>>n>>q;
    for (int i = 1; i <= n; i++)
    {
        arr[i] = i;
    }
    for (int i = 0; i < q; i++)
    {
        cin>>tmp>>par1>>par2;
        if (tmp == 1)
        {
            join(par1,par2);
        }else
        {
            cek(par1,par2);
        }
    }
    
    






    return 0;
}