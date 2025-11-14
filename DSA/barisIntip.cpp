#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> v;
int jawaban;
int n,tmp;
int w;

signed main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>tmp;
    // cout<<v[v.size() - 1]<<"}" <<endl;
    // cout<<tmp<<endl;
    if(v.size() == 0){
    v.push_back(tmp);
    continue;
    }
        while (tmp >= v[v.size()-1] && v.size() != 0)
        {
            if (v.size() == 1)
            {
                jawaban += tmp;
                // cout<<"masuk 1"<<endl;
            }else if (tmp <= v[v.size() - 2])
            {
                jawaban += tmp;
                // cout<<"masuk 2"<<endl;

            }else
            {
                jawaban += v[v.size() - 2];
                // cout<<"masuk 3"<<endl;

            }
            v.pop_back();
        }
                // cout<<jawaban<<")"<<endl;

        v.push_back(tmp);
        // for(auto x : v)cout<<x<<" :";
        //         cout<<endl;


        
        
    }
    if (v.size() > 1)
    {
        for (int i = 0; i < v.size() -1; i++)
        {
            jawaban += v[i];
        }
        
    // cout<< accumulate(v.begin() , v.end()-1,jawaban)<<endl;
    }
    
    cout<<jawaban<<endl;
}