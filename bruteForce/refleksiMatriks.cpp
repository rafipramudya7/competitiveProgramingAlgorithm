#include <bits/stdc++.h>
using namespace std;
int arr[80][80];
int arrh[80][80];


int n,t ,m,y;
int diagonalKanan,diagonaKiri,identik,horizontal,vertikal = 0;




int main(){
    cin>>n>>t;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < t; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    cin>>m>>y;
        for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < y; j++)
                {
                    cin>>arrh[i][j];
                }
                
            }
    // pengecekan

    for (int i = 0; i < n; i++)
    {
        for ( int j = 0; j < t; j++)
        {
            if(arr[i][j] == arrh[i][j]) identik++;
            if(arr[i][j] == arrh[n - 1 - i][j]) horizontal++;
            if(arr[i][j] == arrh[i][t -1 - j]) vertikal++;
            if(arr[i][j] == arrh[j][i]) diagonalKanan++;
            if(arr[i][j] == arrh[n - 1 - j][n - 1 - i]) diagonaKiri++;
            
        }
        
    }
    int tmp = n*t;
    if (identik == tmp )
    {
        cout<<"identik";
    }else if (diagonaKiri == tmp)
    {
        cout<<"diagonal kiri bawah";
    }else if (diagonalKanan == tmp)
    {
        cout<<"diagonal kanan bawah";
    }else if (horizontal == tmp
    )
    {
       cout<<"horisontal";
        /* code */
    }else if (vertikal == tmp)
    {
        cout<<"vertikal";
    }else
    {
        cout<<"tidak identik";
    }
    return 0;
}