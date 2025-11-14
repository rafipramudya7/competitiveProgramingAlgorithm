#include <bits/stdc++.h>
using namespace std;
string s;
int n;
bool kanan, kiri = false;
int par =0;
string  arr[105],hasil[105];


int main(){
    cin>>s>>n;
    // hapus bintang
    int cari = s.find("*");
    s.erase(cari,1); 

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        // cek jika ada substring nya
        if (arr[i].find(s) != string :: npos)
        {
            hasil[par] = arr[i];
            par++;
        }
        
    }
    for (int i = 0; i < par; i++)
    {
        cout<<hasil[i]<<endl;
    }
    
    
    






    return 0;
}