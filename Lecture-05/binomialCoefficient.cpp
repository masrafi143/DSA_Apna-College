//Calculate binomial coefficient nCr for n and r.

#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}
int main(){
    int n,r;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;
    int nCr = factorial(n)/(factorial(r)*factorial(n-r));
    cout << "nCr: " << nCr;
    return 0;
}