#include <bits/stdc++.h>
using namespace std;
int a,b,c,d;
long long e,f,par;


void utama( long long  x){
    //   cout<<"masuk "<<x<<endl;

    for (int i = 2; i <= x; i++)
    {
        if (e % i == 0 && f % i ==0)
        {
            e =  e / i;
            f =  f /i;
            return utama(x/i);
        }
        
    }
    
}

int main(){
    cin>>a>>b>>c>>d;
    f=b * d;
    e = (a *d )+ (b*c);
    // e = 14;
    // f = 3;
   par = min(e,f);
// 
    utama(par);
    cout<<e<<" "<<f;






}