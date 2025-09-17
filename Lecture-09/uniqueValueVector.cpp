#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>a={2,2,3,3,4,4,5};
    int unique=0;
    for(int value : a){
        unique ^= value; //xor->  n^n=0, n^0=n, n^x=1;
    }
    cout << unique<<" unique\n" ;
}