//kadane's Algorithm. 1 loop => time complexity -> O(n)

#include<iostream>
using namespace std;
int main(){   
    int a[]={1,-2,3,-1,4,5};
    int currSum=0, maxSum =a[0];
    for(int i=0; i<6; i++){
        currSum += a[i];
        maxSum = max(currSum, maxSum);
        if(currSum<0){
            currSum =0;
        }
    }
    cout << maxSum;
}