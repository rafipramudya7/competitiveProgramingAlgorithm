#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

# define  Fast     ios_base::sync_with_stdio(false); cin.tie(NULL);
long long typedef ll;

ll a,b,c;
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
cin>>a>>b>>c>>juta;
//    auto start = high_resolution_clock::now();

bool cek = false;
ll TMP = solve(b%juta,c);
// cout<<TMP;
TMP = solve(a%juta,TMP);


 cout<<TMP + 1;


    // auto stop = high_resolution_clock::now();
    //     auto duration = duration_cast<microseconds>(stop - start);
 
    // cout << "Time taken by function: "
        //  << duration.count() << " microseconds" << endl;




    return 0;
}