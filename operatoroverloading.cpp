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
    Complex operator+(Complex x){
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
    void print(){
        cout << real << " + i" << img << endl;
    }
};
int main(){
    Complex c1(20,15), c2(4,8);
    Complex c3 = c1 + c2;
    c3.print();
}