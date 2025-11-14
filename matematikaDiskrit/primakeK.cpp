#include <bits/stdc++.h>
using namespace std;

vector<int> arr;
int tmparr;

int par = 0;
// cari bilangan prima
int cari(int x){
    int j = 0;
    int h;
    while (j != x)
    {
         h = 2;
        if (prima(h))
        {
            j++;
        }
        h++;
        
    }
    arr.push_back(h-1);

    
}
// cek bilangan primaa
bool prima(int x){
    if (x == 2 || x == 3)
    {
        return true;
    }
    
    for (int i = 2; i*i <= x; i++)
    {
        if (x % i ==0)
        {
            return false;
        }
        
    }
    return true;
    




}


int main(){
    cin>>par;
    for (int i = 0; i < par; i++)
    {
        int b;
        cin>>b;
        cari(b);
    }
    

    // cout element vektor
    for (size_t i = 0; i < count; i++)
    {
        /* code */
    }
    
   
    





    return 0;
}