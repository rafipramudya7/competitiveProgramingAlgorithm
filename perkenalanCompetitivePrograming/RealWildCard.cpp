#include <bits/stdc++.h>
using namespace std;
int r;
int x= 0;
string arr[40];
string a,b,par;

bool utama(string pertama, string kedua ){
    // debugging
    // cout<<" yang pertama "<<pertama<<endl;
    
    //     cout<<" yang kedua "<<kedua<<endl;



    if (pertama.length() == 0 &&   kedua.length() == 0)
    {
        return true;
    }

    //  jika iterator kedua melewati string 
    if  (pertama[0] == '*' &&   pertama.length() != 1   && kedua.length() == 0)
    {
        return false;
    }
    // jika benar iterator tambah 1 dan jika ? skip juga
    if (pertama[0] == '?' || pertama[0] == kedua[0])
    {
        // debugging
        // cout<<"  kembar  "<<endl;
        return utama(  pertama.erase(0,1), kedua.erase(0,1));
    }

    if (pertama[0] == '*')
    {
        // debugging
        // cout<<"  -----------------------cabang------------------    "<<endl;
        string tmp = pertama;
        return utama( pertama.erase(0,1) ,kedua ) || utama( tmp  ,  kedua.erase(0,1));
    }
    return false;
}

int main(){
    cin>>par;
    cin>>r;
    for (int i = 0; i < r; i++)
    {
        cin>>b;
        if (utama(par,b)==true)
        {
            arr[x] = b;
            x++;
        }
        
    }
      int arrSize = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < arrSize; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    




}