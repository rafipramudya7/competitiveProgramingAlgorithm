#include <bits/stdc++.h>
using namespace std;

map <string,vector<string>> arr;
map<string,bool>visited;
stack <string>jawaban;
int n,m;
string ayah,anak;
stack <string> sr;

void PrintStack(stack<string> s)
{
    // If stack is empty
    if (s.empty())
        return;
 
// Extract top of the stack
    string x = s.top();
 
    // Pop the top element
    s.pop();
 
  
    cout << x << ' ';
 
    PrintStack(s);
 
    s.push(x);
}

void dfs(string x,string par){

    sr.push(x);
    visited[x] = true;
    //  PrintStack(sr);
    //  cout<<"-----------------------------------------"<<endl;
    if (x == par)
    {
        // PrintStack(sr);
        // cout<<"ada"<<endl;
        // print sstack dan program mat
        while (sr.size() != 0)
        {
            jawaban.push(sr.top());
            // cout<<sr.top()<<endl;
            sr.pop();
            
            /* code */
        }
        while (jawaban.size() != 0)
        {
            cout<<jawaban.top()<<endl;
            jawaban.pop();
        }
        
        exit(0);
        
    }
    
    if (arr.find(x) == arr.end())
    {
      sr.pop();
      return;
    }
    
    // buat jadi true
    for(auto y : arr[x]){ 
        // cek jika else dal ada
        if (visited[y] == false)
        {
            // push kestack
            dfs(y,par);
        }
        
    }
    sr.pop(); 





}


int main(){
    cin>>n>>m;;
    for (int i = 0; i < m; i++)
    {
        cin>>ayah>>anak;
        arr[ayah].push_back(anak);
    }

    cin>>ayah>>anak;

    dfs(ayah,anak);
    visited.clear();
    dfs(anak,ayah);
    cout<<"TIDAK MUNGKIN"<<endl;

  
//    for(itr= arr.begin(); itr!= arr.end(); ++itr){
//     // cout<<itr->first<<endl;
//         for ( auto x : itr->second)
//         {
//             cout<<x<<" ";
//         }
//         cout<<endl;
//    }
//    cout<<endl;

    









    return 0;
}