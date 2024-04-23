#include <iostream>
using namespace std;

// class Operatordemo{
//     int a,b;
//     public:
//     void getdata(){
//         a=5;
//         b=10;
//     }
//     void printdata(){
//         cout<<"\n the value of a and b is "<< a <<" " <<b<<endl;
//         }
//     void operator=(Operatordemo x)
//     {
//         a=x.a;
//         b=x.b;
//     }
// };
// int main(){
//     Operatordemo obj1, obj2;
//     obj2.getdata();
//     obj1 = obj2;
//     obj1.printdata();
//     obj2.printdata();

// }

#include <iostream>
using namespace std;

class Complex{
    private:
    int real, img;
    public:
    Complex(int r =0, int i =0){
        real = r;
        img = i;
    }
    friend Complex operator+(Complex x,Complex y);
    void print(){
        cout << real << " + i" << img << endl;
    }
};
Complex operator+(Complex x,Complex y){
        Complex temp;
        temp.real = x.real + y.real;
        temp.img = x.img + y.img;
        return temp;
    }
int main(){
    Complex c1(20,15), c2(4,8);
    Complex c3 = c1 + c2;
    c3.print();
}