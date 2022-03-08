#include <iostream>
#include <cmath>
using namespace std;


double destancing3D(int x1, int x2, int y1, int y2, int z1, int z2){
    double hasil = sqrt((pow((x2-x1),2) + pow((y2-y1),2) + pow((z2-z1),2)));
    return hasil;
}


int add(int a=0, int b=0, int c=0){
    return (a+b+c);
}

void tukar(int *a, int *b){
    cout<<"*a : "<<a<<endl;
    cout<<"*b : "<<b<<endl;
    cout<<"*a : "<<&a<<endl;
    cout<<"*b : "<<&b<<endl;
}

int main(int argc, char const *argv[]){
    int a = 3;
    int b = 2;

    int *pa = &a;
    int *pb = &b;
    tukar(pa, pb);


    return 0;
}
