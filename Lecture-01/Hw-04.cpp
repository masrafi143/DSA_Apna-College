// d. Given a person's age, find if they should get a driving license or not.
#include<iostream>
using namespace std;
int main(){
    int age;
    cin >> age;
    if(age>=18){
        cout << "Eligible of getting driving license";
    } else{
        cout << "Not Eligible of getting driving license";
    }
    return 0;
}