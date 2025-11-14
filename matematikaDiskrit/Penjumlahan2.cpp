#include<bits/stdc++.h>
using namespace std;

long long a,b,c,d;
long long e,f;


// void penyederhanaan (long long k,long long l){
//     long long x = 2;
//     long long minimum= min(k,l);
//     long  long var = minimum;
//     while ( x <= minimum)
//     {
//         if ( x > var ){
//             break;
//         }
//         while (k % x == 0 && l%  x == 0)
//         {
//             // jika dapat  membagi keduanya maka bagi
//             k = k /x;
//             l = l / x;
//         }
//         x++;
        
//     }
//     e = k;
//     f = l;
    

// }



int main(){
    cin>>a>>b>>c>>d;
    e = a*d + c * b;
    f = b*d;
    long long gecede = gcd(e , f);

    cout << e / gecede << " " << f /gecede;




}