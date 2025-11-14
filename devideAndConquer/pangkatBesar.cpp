#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

# define  Fast     ios_base::sync_with_stdio(false); cin.tie(NULL);
long long typedef ll;

ll a,b;
int juta = 1000000;

ll kali(ll x,ll y){
    return (x % juta )* (y % juta);
}
ll kuadrat (ll x){
    ll tmp = x % juta;
    return (tmp*tmp);
}

ll solve(ll x,ll y){
    // cout<<y<<endl;
    if(y ==0){
        return 1;
    }else if (y == 1)
    {
        return x;
    }else
    {
        if (y%2 == 0)
        {
            return kuadrat(solve(x,y/2))%juta;
        }else
        {
            return(kali(x%juta , solve(x,y-1)%juta))%juta;
        }
        
        
    }
    
    
}
int main(){
    Fast;
cin>>a>>b;
   auto start = high_resolution_clock::now();

bool cek = false;
ll TMP = solve(a%1000000,b);
ll angka = a;
for (ll i = 0; i < b; i++)

{
    if(a == 1)break;
    if (angka >= 1000000)
    {
        cek = true;
        // cout<<angka<<endl;
        break;
    }
    angka *= a;
}
// cout<<TMP;

if (cek)
{
 string s = to_string(TMP);
 for (int i = 1; i <= 6 - s.length(); i++)
 {
    cout<<"0";
 }
 cout<<TMP;
 
    
}else
{
    cout<<TMP;
}

    auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
 
    // cout << "Time taken by function: "
    //      << duration.count() << " microseconds" << endl;




    return 0;
}