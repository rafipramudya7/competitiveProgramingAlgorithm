#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll n,q,x,tmp;
vector<ll>arr;
int main() {
cin>>n;
for (int i = 0; i < n; i++)
{
    int inp;
    cin>>inp;
    tmp+= inp;
    arr.push_back(tmp);
}
cin>>q;
for (int i = 0; i < q; i++)
{
    cin>>x;
    auto jawaban = lower_bound(arr.begin(),arr.end(),x) - arr.begin();
    cout<<jawaban + 1<<endl;
}






}