//3 loops, time complexity => O(n^3)
#include<iostream>
using namespace std;
int main(){
    int a[6]= {1,-2,3,-1,4,5};
    int  max=a[0];
    for(int start =0; start < 6; start++){
        for(int end = start; end < 6; end++){
            int sum =0;
            for(int i=start ; i<=end; i++){
                sum += a[i];
            }
            if(sum>=max){
                max = sum;
            }
        }
        // cout << endl;
    }
    cout << max;
}