#include<iostream>
using namespace std;
int main(){
    int size, num;
    cout << "Enter array size: ";
    cin >> size;
    int a[size];
    for(int i=0; i<size; i++){
        cin >> a[i];
    }
    cout << "Enter num to search: ";
    cin >> num;
    for(int i=0; i<size; i++){
        if(num==a[i]){
            cout << "Found in index: " << i;
            return 0;
        }
    }
    cout << "Not found.";
    return 0;
}