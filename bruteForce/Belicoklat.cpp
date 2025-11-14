#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll n,d,h,b,jawaban;
vector <pair<ll,ll>> arr;
int main(){
    cin>>n>>d;
    // arr.reserve(n+5);
    for (int i = 0; i < n; i++)
    {
        cin>>h>>b;
        arr.push_back(make_pair(h,b*h));
    }
    
    sort(arr.begin(),arr.end());
    for(ll i = 0; i<n ; i++){

        if (arr[i].first > d || d <= 0)
        {
            break;
        }

  

        if(d  >= arr[i].second){
            jawaban += arr[i].second/arr[i].first;
            d -= arr[i].second;
        } else {
            jawaban += d/arr[i].first;
            d -= ((d/arr[i].first) *arr[i].first);
        }
    }

    cout<<jawaban<<endl;






    return 0;
}