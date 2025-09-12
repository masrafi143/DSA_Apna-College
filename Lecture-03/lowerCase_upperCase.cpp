#include<iostream>
using namespace std;
int main(){
    char word = 'z';
    if(word >= 'a' && word <= 'z'){
        cout << "lower case\n";
    } else if(word >= 'A' && word <= 'Z'){
        cout << "upper case\n";
    } else {
        cout << "invalid\n";
    }
    return 0;
}