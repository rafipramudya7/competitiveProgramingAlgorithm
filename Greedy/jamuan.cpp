#include <bits/stdc++.h>
using namespace std;

vector <pair<int,int>> arr;
int n,s,d;
long long mulai,jawaban;


bool sorting(const pair<int,int> &a,const pair<int,int> &b){

    return(a.second < b.second);
}

int main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>s>>d;
        arr.push_back(make_pair(s,d+s));
    }
    sort(arr.begin(),arr.end(),sorting);
    for(auto x : arr){
        if(x.first >= mulai){
            jawaban++;
            mulai = x.second;
        }
        
    }

    cout<<jawaban;

    






    return 0;
}