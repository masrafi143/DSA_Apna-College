#include<iostream>
using namespace std;
int main(){
    int n,prime=1;
    cout << "Enter a number: ";
    cin >> n;
    for(int i=2; i*i <= n; i++){
        if(n%i == 0){
            prime = 0;
            break;
        }
    }
    cout << n << (prime? " is prime": " is not prime");
    return 0;
}