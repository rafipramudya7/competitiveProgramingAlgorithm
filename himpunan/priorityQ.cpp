#include <bits/stdc++.h>
using namespace std;



#define int long long 

int n,x,tmp;
priority_queue<int>q;


signed main(){
cin>>n;
for (int i = 0; i < n; i++)
{
    cin>>tmp;
    if (tmp == 1)
    {
        cin>>x;
        q.push(x);
    }
    if (tmp == 2)
    {
        cout<<q.top()<<endl;
    }
    if (tmp == 3)
    {
        q.pop();
    }
}







    return 0;
}