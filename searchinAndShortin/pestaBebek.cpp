#include <bits/stdc++.h>
using namespace std;

vector<string> vect;
vector<string> :: iterator itr;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        vect.push_back(s);
        sort(vect.begin(),vect.end());
        itr = find(vect.begin(),vect.end(),s);
        cout<< (itr - vect.begin() +1)<<endl;
    }
    





    return 0;
}