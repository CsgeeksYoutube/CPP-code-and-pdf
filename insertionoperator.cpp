#include <iostream>
using namespace std;

class Complex{
    private:
        int real,img;
    public:
    Complex(int real=0,int img=0){
        this-> real = real;
        this-> img = img;
    }
    friend ostream & operator << (ostream &out, Complex &c1);
    friend istream & operator >> (istream &in, Complex &c1);
};
ostream & operator << (ostream &out, Complex &c1){
    out << c1.real << " +i" << c1.img <<endl;
    return out;

}
istream & operator >> (istream &in, Complex &c1){
    cout << "enter the real part of complex number";
    in >> c1.real;
    cout << "enter the img part of complex number";
    in >> c1.img;
    return in;
}
int main(){
    Complex obj1;
    cin >> obj1;
    cout << "the complex number is";
    cout << obj1;
    return 0;
}