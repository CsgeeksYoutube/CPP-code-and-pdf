#include <iostream>
#include <climits>  
using namespace std;

int main() {
    cout << "========================" << endl;

    cout << "char: " << sizeof(char) << endl;
    cout << "int : " << sizeof(int) <<  endl;
    cout << "unsigned int: " << sizeof(unsigned int) << endl;
    cout << "short: " << sizeof(short)  << endl;
    cout << "long: " << sizeof(long)  << endl;
    cout << "long long: " << sizeof(long long)  << endl;
    
    cout << "========================" << endl;

    cout << "float: " << sizeof(float)  << endl;
    cout << "double: " << sizeof(double)  << endl;
    cout << "long double: " << sizeof(long double) << endl;

    cout << "========================" << endl;
    
    cout << "Minimum values:" << endl;
    cout << "char: " << CHAR_MIN << endl;
    cout << "int: " << INT_MIN << endl;
    cout << "short: " << SHRT_MIN << endl;
    cout << "long: " << LONG_MIN << endl; 
    cout << "long long: " << LLONG_MIN << endl;
   
    cout << "========================" << endl;
    
    cout << "Maximum values:" << endl;
    cout << "char: " << CHAR_MAX << endl;
    cout << "int: " << INT_MAX << endl;
    cout << "short: " << SHRT_MAX << endl;
    cout << "long: " << LONG_MAX << endl; 
    cout << "long long: " << LLONG_MAX << endl;

    cout << "========================" << endl;
    
    cout << "sizeof using variable names" << endl;
    int age {21};
    cout << "age is " << sizeof(age)  << endl;
    cout << "age is " << sizeof age  << endl;
     
    double wage { 22.24};
    cout << "wage is " << sizeof(wage)  << endl;
    cout << "wage is " << sizeof wage << endl;

    return 0;
}