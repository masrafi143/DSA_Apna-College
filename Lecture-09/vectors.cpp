#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec={1,2,3,4,5};
    cout <<"size: " << vec.size() << "\n";
    for(int value : vec){
        cout << value <<" ";
    }
    cout << "\n";
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(8);
    cout <<"size after push back: " << vec.size() << "\n";
    for(int value : vec){
        cout << value <<" ";
    }
    cout << "\n";
    vec.pop_back();
    cout <<"size after pop back: " << vec.size() << "\n";
    for(int value : vec){
        cout << value <<" ";
    }
    cout << "\n";
    cout << "first value: " << vec.front() <<endl;
    cout << "last value: " << vec.back()<<endl;
    cout <<"2nd element: " << vec[2] <<"\n";
    cout <<"3rd element: " << vec.at(3)<<endl;
    vector<int>vect(3,1); //size, value
    for(int value : vect){
        cout << value <<" ";
    }
}