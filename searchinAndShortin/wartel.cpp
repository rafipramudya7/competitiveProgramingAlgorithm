#include <bits/stdc++.h>
using namespace std;

vector<int> hasil;
map<string,string>nomor;
int n,q;
int main(){

    cin>>n>>q;
    for (int i = 0; i < n; i++)

    {
        string x;
        string nama;
        cin>>nama>>x;
        nomor.insert({nama,x});
    }
    for (int i = 0; i < q; i++)
    {
        string nama;
        cin>>nama;
        if(nomor.find(nama) == nomor.end()){
            cout<<"NIHIL"<<endl;
        }else
        {
            cout<<nomor[nama]<<endl;
        }
        
    }
    
    









    return 0;
}