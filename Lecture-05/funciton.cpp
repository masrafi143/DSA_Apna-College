#include<iostream>
using namespace std;

void printHello(){
    cout << "Hello world.\n"; 
}
double sum(int a, int b){  //parameters
    return a+b;
}
int main(){
    printHello();
    cout << sum(3,4);  //arguments
    return 0;
}