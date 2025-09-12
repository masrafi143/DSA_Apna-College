//sum of n numbers
#include<iostream>
using namespace std;
int main(){
    int n, i=1, sum=0;
    cout << "enter a number n to calculate sum: ";
    cin >> n;
    while(i<=n){
        sum += i;
        i++;
    }
    cout << "Sum: " << sum << endl;
    return 0;
}