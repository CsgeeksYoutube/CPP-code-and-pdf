#include<iostream>    
using namespace std; 
template <typename P>
P add(P num1, P num2) {
   return (num1 + num2);
}
int main() {

    int result1;
    float result2;
    // calling with int parameters
    result1 = add(2, 3);
    cout << result1 << endl;

    // calling with double parameters
    result2 = add(2.2f, 3.3f);
    cout << result2 << endl;

    return 0;
}
