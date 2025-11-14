#include <bits/stdc++.h>
using namespace std;

vector<pair<int,string>> vect,ampas(11);

int n,r,y,j,d;
int a;
string b;
vector <int> otput;
// fungsi permutasi
void permutasi(vector<pair<int,string>> vec ){
    int pertambahan;
    do
    {
         int memukau;

        for (int s = 0; s < r; s++)
        {
            // jika gerakan memmukau
            if(vec[s].second == "Y"){
                memukau = s;
            }
            if(s >=1 ){
                if(vec[s-1].second == "P"){
                    vec[s].first *= 2;
                }
                if (vec[s-1].second == "L")
                {
                    vec[s].first /= 2;
                }
                if (s > memukau)
                {
                    vec[s].first += y;
                }
                
            }
            
            pertambahan += vec[s].first;
            

        }
        otput.push_back(pertambahan);

    

        // cek nilai

    } while (next_permutation(vec.begin(),vect.end()));
    
}

// fungsi combinasi
void combi(vector<pair<int,string>> vec,vector<pair<int,string>> data,int indek,int rr,int ii ,int nn){
    // base case
    if(indek == rr){


        // kembalikan ke fungsi permutassi
        for(int h = 0; h < rr; h++){
        }
                    return permutasi(data);

    }

    if(ii>= nn){
        return;
    }

    data[indek] = vec[ii];
    combi(vec,data,indek + 1,rr,ii +1,nn);
    combi(vec,data,indek,rr,ii + 1,nn);


}


int main(){
    string trhs;

    // getline(cin,trhs);
    cin>>n,r,y,j;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        vect.push_back(make_pair(a,b));
    }
     combi(vect,ampas,0,r,0,n);
     

    for (int i = 0; i < j; i++)
    {
        int tmp;
        cin>>a;

        for (auto p : otput)
        {
            if (p > a)
            {
                tmp++;
            }
            
        }
        cout<<tmp;
        
    }
    




    





    return 0;
}