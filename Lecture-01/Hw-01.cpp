// a. Calculate "Simple Interest" from Principal (P), Rate (R) & Time (T).
#include<iostream>
using namespace std;
int main(){
    int si,p,r,t;
    cin >> p >> r >> t;
    si = p*r*t;
    cout << "simple interest: " << si;
    return 0;
}