#include<iostream>
using namespace std;
int main(){
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int a[size];
    for(int i=0; i<size; i++){
        cin >> a[i];
    }
    for(int i=0; i<size; i++){
        cout << a[i] << " ";
    }
    cout << "\n";
    int max = a[0], min = a[0], max_index, min_index;
    for(int i=0; i<size; i++){
        if(a[i]>=max){
            max = a[i];
            max_index = i;
        } else if(a[i]<min){
            min = a[i];
            min_index = i;
        }
    }
    cout << "max = " << max << " index: " << max_index << "\n";
    cout << "min = " << min << " index: " << min_index << "\n";

    return 0;
}