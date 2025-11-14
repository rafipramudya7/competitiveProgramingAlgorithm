#include <bits/stdc++.h>
using namespace std;
void median(int arrr[100001],int k){
      double x;

    if(k % 2 == 0){
        x = arrr[k/2 -1 ] + arrr[k / 2 ];
        x = x / 2;

    }else{

        x = arrr[k / 2 ];
    }
	cout << fixed;

    cout<<setprecision(1);
    cout<<x;
}

int main(){
    int arr[100001];
    int t;
    int y = 0;
    int bil;
    
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>bil;
        arr[y] = bil;
        y++;
    }
    sort(arr,arr+t);
    median(arr,t);

  







    return 0;
}