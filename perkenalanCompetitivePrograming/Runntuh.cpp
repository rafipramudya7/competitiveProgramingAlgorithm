#include <bits/stdc++.h> 
using namespace std;
int r,c;
// array penyimpanan row yang kembar
int row[20];
// awal itrrow
int awlitr=0;
int itrrow = 0;
string arr[20][8];
string s;

void cetak(){
    for (int i = 0; i < r; i++)
    {
        for (int e = 0; e < c; e++)
        {
            cout<<arr[i][e];
        }
        cout<<endl;
    }
    
}



bool cek(){
    bool par = false;
    // cek dari baris ke baris
    for (int i = 0; i < r; i++)
    {
        // cek jika awal row ke-i adalah 1
        if(arr[i][0] == "1"){
            bool satuBaris = true;
            // cek jika elemen dalam row ke-i adalah 1
            for (int u = 0; u < c; u++)
            {
                if(arr[i][u] != "1"){
                    satuBaris = false;
                }
                
            }
            // masukan i dalam array row
            if(satuBaris == true){
                par = true;
                row[itrrow] = i;
                // cout<<"okeeee "<<i<<endl;
                itrrow++;
            }
        }
    }
    return par;
}

void hapus(){

    for (int d = awlitr; d < itrrow; d++)
    {
        // cout<< "baris ke terhapus"<<row[d]<<endl;
        
        // ambil baris ke berapa row[d]
        
        // hapus semua baris dengan swap satu persatu
        for (int i = 0; i < c; i++)
        {
            arr[row[d]][i] = "0";
            // // swap dengan atasnya
            // for (int z = row[d]; z > 0; z--)
            // {
            //   swap(arr[z][i],arr[z-1][i]);
            // }
            
        }
        
    }
    awlitr = itrrow;
    
}
void turun(int a , int b){
    // 5 0
    // ulang sampai dibawahnya adalah jumlah row dan dibawahnya adalah 1
    int ymt = a+1;
    // cout<<"id nya "<<a<<" "<<b<<endl;
    while (arr[ymt][b] != "1" && ymt != r)
    {
        swap(arr[ymt-1][b],arr[ymt][b]);
        // cout<<"swap "<<endl;
        ymt++;
    }

}

void persiapan(){
    // definisi baris
    // cout<<row[awlitr - 1]<<endl;
    // cout<<"okeh"<<endl;

    for (int i = row[awlitr-1] ; i >= 0; i--)
    {
            //   cout<<"okee"<<endl;

        
        // cek jika di baris tersebut ada element yang nilainya 1
        for ( int x= 0 ; x < c; x++)
        // cout<<"arr "<<i<<" "<<x<<endl;
        {
            if (arr[i][x] == "1")
            {
                // cout<<"ada"<<endl;
                turun(i,x);
            }
            
        }
        
    }
    
}

void utama(){

    // cout<<"masuk"<<endl;

    // base case (cek jika ada yang satubaris sama dengan satu)
    if(cek()){
        // lakukan penghapusan
        hapus();


        // lakukan persiapan dan turunkan
        persiapan();


        // ulangi ke void utama 
        utama();
        





    }else{
        return cetak();
    }

}

int main(){
    cin>>r>>c;
    for (int i = 0; i < r; i++)
    {
        cin>>s;
        for (int e = 0; e < c; e++)
        {
            arr[i][e] = s[e];

        }
        
    }
    
    // for (int i = 0; i < r; i++)
    // {
    //     for (int u = 0; u < c; u++)
    //     {
    //         cin>>arr[i][u];
    //         // cout<<i<<" "<<u<<endl;
    //     }
        
    // }
    utama();
    






    return 0;
}