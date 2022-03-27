#include <iostream>
#include <string.h>
#include <cmath>

using namespace std;

//fungsi untuk menentukan jarak antar titik 2dimensi




//fungsi untuk membalik string
char* balik(char* str){
    static int i = 0 ;
    static char result[26];
    if(*str != '\0'){
        balik(str+1);
        result[i++] = *str;
    }
    return result;
}



//program/fungsi untuk menghitung frekuensi huruf a dan space
void countWord(){
}

double distance(char* x1, char* x2, char* y1, char* y2){
    return sqrt(pow((atof(x2)-atof(x1)),2)+
                pow((atof(y2)-atof(y1)),2));
}

int main(int argc, char const *argv[]){  
    char name[10] = "saya budi";
    cout<<balik(name)<<endl;
    // char str;
    // int a = 0 , spc = 0;
    //  while (cin.get(str)){
    //     if(str == 'a'){
    //         a++;
    //     }
    //     if(str == ' '){
    //         spc++;
    //     }
    //     if(str == '.'){
    //         break;
    //     }
    // }
    // cout<<a<<" "<<spc<<endl;
    return 0;
}

    // cout<<distance(x1, x2, y1, y2)<<endl;  
    // countWord();