#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int> > vect;


int main(){
    int t;
    int patokan;

    cin>>t;
    cin>>patokan;
    for (int i = 1; i <= t; i++)
    {
        int x;
        cin>>x;
        int minimall = min(patokan,x);
        int maximall = max(patokan,x);
        vect.push_back(make_pair(maximall - minimall ,x));
        sort(vect.begin(),vect.end());
    }
            cout<<vect[0].second;

    






    return 0;
}