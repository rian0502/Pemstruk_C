#include <iostream>
#include <cstring>

using namespace std;

class Manusia{
    private:
        int umur;
        string nama;

    public:
        Manusia(){
            this->umur = 3;
            this->nama = "asep";
        }
        Manusia(string nama, int umur){
            this->umur = umur;
            this->nama = nama;
        }
        void print(){
            cout<<"Usia Saya : "<<this->umur<<endl;
            cout<<"Nama Saya : "<<this->nama<<endl;
        }
};



//strcmp string comparison membandingkan string
// is 
bool checkString(char* str){
    int panjang = strlen(str);
    for(int i = 0 ; i < panjang ; i++){
        if (islower(str[i])){
            return false;
        }
    }
    return true;
}


int main(){
    const char* nama[3] = {"siska","Budi","mane"};
    int nData = sizeof(nama)/sizeof(nama[0]);

    for (int i = 0; i < nData; i++){
        int nString = strlen(nama[i]);
        for (int j= 0; j < nString; j++){
            cout<<(char)toupper(*(*(nama+i)+j));
        }
        cout<<endl;
    }
    
    return 0;
} 

    // int n;
    // cin>>n;
    // char str[n][20];
    // cin.ignore(1,'\n');

    // for (int i = 0; i < n; i++){
    //     cin.getline(str[i],20);
    // }

    // for (int i = 0; i < n; i++){
    //     if(checkString(str[i])){
    //         cout<<"Besar"<<endl;
    //     }else{
    //         cout<<"Kecil"<<endl;
    //     }
    // }