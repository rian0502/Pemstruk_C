#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    //Pointer Deklarasi
    int nilai = 10;
    int *ptrNilai = &nilai;
    int **ptrNilaiPtr = &ptrNilai;

    cout<<endl;
    cout<<"Nilai : "<<nilai<<endl;
    cout<<"Alamat nilai : "<<&nilai<<endl;

    cout<<endl;
    cout<<"Nilai tnp * : "<<ptrNilai<<endl;
    cout<<"Nilai PTr : "<<*ptrNilai<<endl;
    cout<<"Nilai & "<<&ptrNilai<<endl;
    cout<<endl;

    cout<<"Nilai tnp * : "<<ptrNilaiPtr<<endl;
    cout<<"Nilai * : "<<*ptrNilaiPtr<<endl;
    cout<<"Nilai ** :  "<<**ptrNilaiPtr<<endl;
    cout<<"Nilai & :  "<<&ptrNilaiPtr<<endl;
    **ptrNilaiPtr  = 3;
    cout<<endl;
    cout<<"Nilai : "<<nilai<<endl;
    cout<<"Alamat nilai : "<<&nilai<<endl;
    
    return 0;
}
