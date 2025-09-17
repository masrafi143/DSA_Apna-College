#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int binary = 101, decimal=0;
    for(int i=0; binary > 0; i++){
        int reminder = binary % 10;
        binary = binary / 10;
        decimal += reminder * pow(2,i);
    }
    cout << decimal;
    return 0;
}