// Conditional Statement
#include<iostream>
using namespace std;
int main(){
    //if-else
    int a=5, b=3;
    if(a>3){
        cout <<"a is greater than b";
    } else {
        cout << "a is less than b";
    }
    //ternary operator
    int c=5;
    cout << (c>0 ? "positive": "negative");
    return 0;
}

