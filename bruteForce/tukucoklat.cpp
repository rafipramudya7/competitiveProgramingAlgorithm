#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll n,D,h,b,counts,jawaban;
vector <pair<ll,ll>> arr;
int main(){
    cin>>n>>D;
    // arr.reserve(n+5);
    for (int i = 0; i < n; i++)
    {
        cin>>h>>b;
        arr.push_back(make_pair(h,b));
    }
    
    sort(arr.begin(),arr.end());
for (auto& data: arr)  {

    if (D <= 0 || D < data.first) break;

    
    ll temp = D / data.first;

    
    if(temp >= data.second){
        D -= data.first * data.second;
        counts += data.second;
    } else{
    D -= temp * data.first; 
    counts += temp;
    }

}

    cout<<counts<<endl;






    return 0;
}

