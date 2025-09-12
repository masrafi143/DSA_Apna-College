//type conversion, type casting
#include <iostream>
using namespace std;
int main(){
    /*
    Implicit Type Conversion (Type Promotion / Type Casting done by compiler)
    Done automatically by the compiler.
    Example: smaller → bigger type.
    */
    int a = 10;
    double b = a;   // int automatically converted to double
    cout << b;      // Output: 10

    /*
    Explicit Type Conversion (Type Casting / Manual Conversion)
    Done manually by the programmer.
    */
    int a = 5, b = 2;
    double result = (double)a / b;   // cast one operand to double
    cout << result;                  // Output: 2.5
    return 0;
}