//2 loops => time complexity -> O(n^2)
#include<iostream>
using namespace std;
int main(){
    int a[]={1,-2,3,-1,4,5};
    int maxSum = a[0];
    for(int start=0; start<6; start++){
        int currSum =0;
        for(int end=start; end <6; end++){
            currSum += a[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout << maxSum;
}