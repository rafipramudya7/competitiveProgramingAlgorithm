#include <bits/stdc++.h>
using namespace std;

#define int long long

int n;

vector <int> p,k,l;
int sd,sm,tmp,tmp1,tmp2,waktu;
string s;
priority_queue <int , vector<int>,greater<int>> pq;




signed main(){
    cin>>s;
    cin>>n>>sd>>sm;

    for (int i = 0; i < n-1; i++)
    {
        cin>>tmp>>tmp1>>tmp2;
        p.push_back(tmp);s
        k.push_back(tmp1);
        l.push_back(tmp2); 
    }
    p.push_back(sm);
    
    for (int i = 0; i < n; i++)s
    {
        // cek jika tidak cukup
        while (!pq.empty() && sd < p[i])
        {
            sd ++;
            waktu += pq.top();
            pq.pop();

        }

        // cek jika masih kurang
        if (sd < p[i])
        {
            cout<<-1<<endl;
            exit(0);
            /* code */
        }

        // cek jika tidak kurang
        if (i < n-1)
        {
            if (k[i] >= l[i])
            {
                waktu += l[i];
                sd++;
            }else{
                waktu+= k[i];
                pq.push(l[i]- k[i]);
            }

        }
    }

    cout<<waktu<<endl;
    


    return 0;
}