#include<iostream>
using namespace std;
int main(){
    int unique=0;
    int a[5]={2,2,3,3,4};
    for(int i=0; i<5; i++){
        unique ^= a[i];  //xor->  n^n=0, n^0=n, n^x=1;
    }
    cout << unique <<" unique\n" ;
}