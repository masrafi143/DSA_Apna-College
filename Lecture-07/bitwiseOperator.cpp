// Bitwise operator => and(&), or(|), xor (^), 
//     Bitwise >> (right shift) => a >> b => a/2^b
//     Bitwise << (left shift) => a << b => a*2^b

#include<iostream>
using namespace std;
int main(){
    cout << (6 & 10) <<"\n"; // 0110 & 1010 =>0010 => 2
    cout << (6 | 10) << "\n";  // 0110 | 1010 =>1110 => 14
    cout << (6 ^ 10) << "\n";  // 0110 ^ 1010 =>1100 => 12
    cout << (10 << 2) << "\n"; //1010 -> 101000 -> 40
    cout << (10 >> 2) << "\n"; //1010 -> 10 -> 2
}