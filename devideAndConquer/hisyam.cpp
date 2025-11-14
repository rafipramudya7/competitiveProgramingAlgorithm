#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define popb pop_back
#define F first
#define S second
#define len length
#define sz size
#define mp make_pair
#define all(v) v.begin(), v.end()
#define FOR(i,l,r) for(int i = l; i < r; i++)
#define FORR(i,l,r) for(int i = r; i >= l; i--)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);



int power(int a, int b){
if(b == 1 || a == 1) {
return a;
} else if(b == 0) {
return 1;
} else {
a %= 1000000;
int x = power(a, b/2) % 1000000;
if(b %2 == 0) {
int ret = (x * x) % 1000000;
return ret;
} else {
int ret = (x * x * a) % 1000000;
return ret;
}
}
}
signed main(){
    int a,b;
    cin>>a>>b;

bool cek = false;
int TMP = power(a,b);
int angka = a;
for (int i = 1; i <= b ; i++)

{
    if(a == 1)break;
    
    if (angka >= 999999)
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
 for (int i = 1; i <= 6 - s.len(); i++)
 {
    cout<<"0";
 }
  cout<<TMP;

}else{
 cout<<TMP;

}
 
    


 
    // cout << "Time taken by function: "
    //      << duration.count() << " microseconds" << endl;




    return 0;
}