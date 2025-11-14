#include <bits/stdc++.h>
using namespace std;
#define int long long

int n,ans,a,hasila,beban,sed;
// elemen pertama angka keduaa index





signed main(){
    while (true)
    {
        cin>>n;
        if (n == 0)
        {
            break;
        }
    stack<pair<int,int>> st1,st2;
    ans = 0;
    int tmp = 0;
        while(n--){
        cin>>a;
        // cek jika positif
            if(a < 0){
            st2.push({a,tmp});
            }else
            {
                st1.push({a,tmp});
            }
            
            while (!st2.empty() && !st1.empty())
            {
                hasila = st1.top().first + st2.top().first;
                beban = abs(st2.top().second - st1.top().second);
                // cek jika samping plus
                if (hasila > 0)
                {
                    st1.top().first = hasila;
                    ans += abs(st2.top().first) * beban;
                    st2.pop();
                    /* code */
                }else if(hasila == 0)
                {
                    ans += abs(st2.top().first) * beban;
                    st1.pop();
                    st2.pop();
                }else{
                    st2.top().first = hasila;
                    ans += st1.top().first * beban;
                    st1.pop();
                }
                
                
                

                /* code */
            }
            
            /* code */
            tmp++;
        }
        cout<<ans<<endl;

        
        
        /* code */
    }
    




        
    





    return 0;
}