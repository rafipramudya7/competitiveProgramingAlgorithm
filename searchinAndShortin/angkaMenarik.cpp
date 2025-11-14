#include <bits/stdc++.h>
using namespace std;


vector<pair<int,int>> hasil;
int awal[101][101];


int t,n,tmp,patokan;
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    // return (a.second < b.second );

        if (a.second == b.second) {
            return a.first < b.first;
        } else {
            return a.second < b.second;
        }    // if(a.second == b.second) return (a.first<b.first);
}

void cara(int a, int b){

    int perkalian = 1;
    if (a - 1 >= 0 )
    {
        perkalian = perkalian * awal[a-1][b];
    }
    if( a +1 < t){

        perkalian = perkalian * awal[a+1][b];
    }
    if (b - 1 >= 0)
    {
        perkalian = perkalian * awal[a][b-1];
    }
    if (b +1 < n)
    {
        perkalian = perkalian * awal[a][b+1];
    }
    if (perkalian == tmp)
    {
        /* code */
        // cout<<"yes";
    hasil.push_back(make_pair(a +1 ,b+1));
    }
    

}

int main(){
    cin>>t>>n>>tmp;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>awal[i][j];

        }
        
    }

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cara(i,j);
        }
        
    }
    sort(hasil.begin(),hasil.end(),sortbysec);


    // for(auto pr : hasil){
    //     cout << pr.first << " "<< pr.second<<endl;
    // }
    if(hasil.size() == 0){
        cout<<"0 0"<<endl;
    }else
    {
         cout<< hasil[0].first<< " "<< hasil[0].second;
    }
    

    







    return 0;
}