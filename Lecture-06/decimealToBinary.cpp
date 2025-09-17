#include<iostream>
using namespace std;
int main(){
    int decNum = 3, power =1,binary=0;
    while(decNum > 0){
        int reminder = decNum % 2;
        decNum = decNum / 2;
        binary += reminder*power;
        power *= 10;
    }
    cout << binary;
    return 0;
}