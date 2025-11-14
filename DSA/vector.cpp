#include <bits/stdc++.h>
using namespace std;




int n,tmp;
vector <int> arr;
string s;
int main(){

    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        if (s == "pop_front")
        {
            arr.erase(arr.begin());
        }
        if (s == "push_back")
        {
            cin>>tmp;

            arr.push_back(tmp);
        }
        if (s == "push_front")
        {
            cin>>tmp;

            arr.insert(arr.begin(),tmp);
        }
        if (s == "pop_back")
        {
            arr.pop_back();
        }

    }
        for(auto x : arr)cout<<x<<endl;

    








    return 0;
}