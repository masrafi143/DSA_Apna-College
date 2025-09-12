#include<iostream>
using namespace std;

int digitSum(int n){
    int sum =0;
    while(n >0){
        int lastDigit = n % 10;
        n = n /10;
        sum += lastDigit;
    }
    return sum;
}
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "digit sum: " << digitSum(n);
    return 0;
}