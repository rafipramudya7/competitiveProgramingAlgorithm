#include <bits/stdc++.h>
using namespace std;



int n;
string s;
int x,y;
vector <int> v;
int main(){


    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        if (s == "add")
        {
            cin>>x>>y;
            v.insert(v.end(),y,x);
            cout<<v.size()<<endl;

        }
        if (s == "del")
        {
            cin>>x;
             cout<<v[0]<<endl;

            v.erase(v.begin(),v.begin()+x);

        }
        if (s == "rev")
        {
            reverse(v.begin(),v.end());
        }
    // for(auto p : v)cout<<p<<endl;

        
    }
    





    return 0;
}