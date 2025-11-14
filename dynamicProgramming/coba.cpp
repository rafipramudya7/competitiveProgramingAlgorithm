#include <bits/stdc++.h>
using namespace std;

string pertanyaan[50],jawaban[50];
int n,salah;




int main(){
    // getline(cin,pertanyaan[0]);
    // cin>>jawaban[1];
    // cout<<jawaban[1]<<endl;
    // cout<<pertanyaan[0]<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>pertanyaan[i];
        // getline(cin,pertanyaan[i]) ;
        cin>>jawaban[i];
    cout<<"o"<<endl;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<pertanyaan[i]<<endl;
    // }
    
    int i = 0;
    string tmp;
    while (i < n && salah <2)
    {
        cout<<pertanyaan[i];
        cin>>tmp;
        if (tmp == jawaban[i])
        {
            /* code */
            cout<<"kamu benar"<<endl;
            salah = 0;
        }else
        {
            cout<<"coba lagi"<<endl;
            salah++;
            continue;
        }
        i++;
        
        
    }

    if (salah ==2)
    {
        /* code */
        cout<<"game over"<<endl;
    }else
    {
        cout<<"kamu menaang"<<endl;
    }
    return 0;
}