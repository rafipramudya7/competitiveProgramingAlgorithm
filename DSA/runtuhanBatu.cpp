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
    cout<<v[v.size() - 1]<<"}" <<endl;
        while (tmp >= v[v.size()-1] && v.size() != 0)
        {
            if (v.size() == 1)
            {
                jawaban += tmp;
            }
            if (tmp <= v[v.size() - 2])
            {
                jawaban += tmp;
            }else
            {
                jawaban += v[v.size() - 2];
            }
        }
        v.push_back(tmp);
        
        
    }
    if (v.size() > 1)
    {
     accumulate(v.begin() +1 , v.end(),jawaban);
    }
    cout<<jawaban<<endl;
}