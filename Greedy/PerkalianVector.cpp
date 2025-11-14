#include <bits/stdc++.h>
using namespace std;
#define int long long
int bil;

int n,jawaban;
vector <int> arr1,arr2;






signed main(){
cin>>n;
for (int i = 0; i < n; i++)
{
    cin>>bil;
    arr1.push_back(bil);

}
for (int i = 0; i < n; i++)
{
    cin>>bil;
    arr2.push_back(bil);

}
sort(arr1.begin(),arr1.end(),greater<int>());
sort(arr2.begin(),arr2.end());

for (int i = 0; i < n; i++)
{
    jawaban += (arr1[i] *arr2[i]);
}
cout<<jawaban;






    return 0;
}