#include <bits/stdc++.h>
using namespace std;


int n;
string s;
int x,y;
int penambah;
vector <int> v;
int main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        if (s == "add")
        {
            cin>>x>>y;
            // while (y--)
            // {
            //     /* code */
            //     v.
            // }
            
            v.insert(v.end(),y,x-penambah);
            cout<<v.size()<<endl;

            
            /* code */
        }
        if ( s =="del")
        {
            cin>>y;
            v.back() += penambah;
            cout<<v.back()<<endl;
            while (y--)
            {
                /* code */
                v.pop_back();
            }
            

            /* code */
        }
        if(s == "adx"){
            cin>>x;
            penambah += x;
        }
        if (s == "dex")
        {
            cin>>x;
            penambah -= x;
            /* code */
        }
        // for(auto x : v)cout<<x<<" ";
        // cout<<endl;
        
        
        
    }
    






    return 0;
}