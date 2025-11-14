#include <bits/stdc++.h>
using namespace std;


#define ll long long

int main(){

    int n,h;
    ll b,tmp,hasil;
    vector <int> arr;
    cin>>n>>b;
    for (int i = 0; i < n; i++)
    {
        cin>>h;
        arr.push_back(h);
    }
    sort(arr.begin(),arr.end(),greater<int>());
            tmp = 0;

    for (int i = 0; i < n; i++)
    {
        tmp += arr[i];
        hasil++;
        if (tmp >= b)
        {
            cout<<hasil;
            break;
        }
        
    }
    
    





    return 0;
}