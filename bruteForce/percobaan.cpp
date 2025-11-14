#include<bits/stdc++.h>
using namespace std;


vector<pair<int,string>> vect;
vector <int> hasil,ampas;
bool cek[15] = {false};
int n,r,y,j;
vector<int>::iterator upper;



void permutation(int par , int sum,bool memfukau,string prev){

    
    // base case
    if(par == r){
        // cout<<sum<<" selesai"<<endl;
        hasil.push_back(sum);
        // cout<<"selesai"<<endl;
        // cout<<"{"<<endl;
        // for(auto t : tmp)cout<<t<<endl;
        // cout<<"}";
        return;

    }
    for (int i = 0; i < n; i++)
    {
        // cout<<i<<prev<<" - ";
    int newsum = sum;
    // cout<<newsum<<endl;

        if (cek[i])
        {
            continue;
        }
        // cout<<vect[i].first<<" "<<vect[i].second<<endl;
        // tmp.push_back(vect[i].first);

        //  perhitungan


            if(par>=1 ){
                if(prev == "P"){
                    newsum += (vect[i].first * 2);
                }else if (prev == "L")
                {
                    // cout<<newsum<<endl;

                    // cout<<"yes "<<vect[i].first<<endl;
                    newsum +=( vect[i].first / 2);
                    // cout<<newsum<<endl;

                }else{
                    // cout<<newsum<<endl;
                    newsum+= vect[i].first;
                }
                    // cout<<newsum<<endl;

                

                if ( memfukau == true)

                {
                    newsum +=y;
                    // cout<<"true"<<endl;
                }
                // cout<<newsum<<endl;
                
            }else{
                newsum += vect[i].first;
                // cout<<"masuk"<<endl;
            }
        cek[i] = true;
        // cout<<endl<<"{"<<newsum<<"}"<<endl;
        
        // kembalikan fungsi
        permutation(par + 1,newsum, memfukau | vect[i].second == "Y",vect[i].second);

        // tmp.pop_back();
        cek[i]= false;


        
    }
    return;
    
}



int main(){
    int a;
    string b;
    getline(cin,b);
    cin>>n>>r>>y>>j;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        vect.push_back(make_pair(a,b));
    }
    permutation(0,0,0,"");
    sort(hasil.begin(),hasil.end());
    // cout<<"--------"<<endl;
    // for ( auto ki : hasil) cout<<ki<<endl;

    


    for (int i = 0; i < j; i++)
    {
        int x;
        cin>>x;
        upper = upper_bound(hasil.begin(),hasil.end(),x);
        cout<<hasil.size()-(upper - hasil.begin())<<endl;
        
 

    }
}
    
    
    











// analysis

/*


vect { {1,a},{2,b},{3,c}}

r = 2
(0,sum) 0 -0 (1,sum) 1-0 1-1 (2,sum) pushback --> 0,1
                     1-2 (2,sum) push back    -->0,2
        0-1(1,sum) 1-0(2,sum)                 --1,0
                   1-1 1-2(2,sum)             -->1,2
        0-2(1,sum)1-0(2,sum)                  -->2,0
                  1-1(2,sum)                  -->2,1









*/
