#include <bits/stdc++.h>
using namespace std;



int main(){
    int n,t;
    int l,m;
    int hasil;
    vector<int>vect;
    vector<int> ::iterator a,b;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        vect.push_back(x);
    }
    sort(vect.begin(),vect.end());
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>l>>m;
        
        a = upper_bound(vect.begin(),vect.end(),l);
        b = upper_bound(vect.begin(),vect.end(),m);

        hasil = b - a;
        cout<<hasil<<endl;
    }

    // 3 3 4 4 4 5 8 9
    // 0 1 2 3 4 5 6 7 
    // 3 7
    // 0 - 6
    // 4 9
    // 5 - 8 
    
    







    return 0;
}