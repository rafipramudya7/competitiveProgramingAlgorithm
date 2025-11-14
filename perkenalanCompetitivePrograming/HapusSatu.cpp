#include <bits/stdc++.h>
using namespace std;
bool pertamanya = true;
bool hasil = true;
string pertama,kedua;



int main(){
    cin>>pertama>>kedua;
    if (pertama == kedua)
    {
        hasil = false;
    }else{ 
        for (int i = 0; i < kedua.length(); i++)
        {
            // cout<<i<<endl;
            // jika sama 
            if (pertama[i] == kedua[i])
            {
                continue;
            }
            // jika tidak sama tapi pertama
            if (pertama[i] != kedua[i] && pertamanya == true)
            {
                // cout<<"jaa "<<endl;
                pertama.erase(i,1);
                i--;
                pertamanya = false;
                continue;
            }
            

            // cout<<"haaa  "<<endl;
            // jika memang tidak sama
            hasil = false;
            break;
        }
    }
    
    if (hasil == true)
    {
        cout<<"Tentu saja bisa!";
    }else{
        cout<<"Wah, tidak bisa :( ";
    }
    
    







    return 0;
}