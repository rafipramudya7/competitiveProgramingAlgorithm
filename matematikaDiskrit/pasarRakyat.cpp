#include <bits/stdc++.h>
using namespace std;

int main(){
    int  t,fpb = 1;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin>>x;
        fpb = lcm(fpb,x);
    }
    cout<<fpb;
    

    




    return 0;
}