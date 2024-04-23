#include <iostream>
using namespace std;

// class Base{
//     public:
//     int a=0;
//     void display(){
//         cout << a <<" " << b << " " << c <<endl;
//     }
//     protected:
//     int b=5;
//     private:
//     int c=10;
// };
// class Derived: protected Base{
//     public:
//     void changethevalue(){
//         a = 100;
//         b=200;
//         cout << a <<" " << b << " " <<endl;
//         // c=300;
//     }
// };
// int main(){
//     cout<< "base memmber aceess form base object"<<endl;
//     Base obj1;
//     obj1.a=100;
//     // obj1.b=20;
//     // obj1.c=300;

//     cout<< "derived memmber aceess form base object"<<endl;
//     Derived obj2;
//     obj2.a=45;
//     obj2.b=250;
//     obj2.c=450;
//     obj2.changethevalue();
// }

class Rectangle{
    private:
    int length;
    int breath;
    public:
    Rectangle();
    Rectangle(int l,int b);
    int getLength(){
        return length;
    }
    int getBreath(){
        return breath;
    }
    void setLength(int l);
    void setBreath(int b);
};
class Cuboid:public Rectangle{
    private:
    int height;
    public:
    Cuboid(int h){
        height = h;
    }
    int getHeight(){
        return height;
    }
    void setHeight(int h){
        height = h;
    }
    int volume(){
        return getLength()*getBreath()*getHeight();
    }

};
int main(){
    Cuboid c(10);
    c.setLength(20);
    c.setBreath(50);
    cout<<"Volume is "<<c.volume()<<endl;
}
Rectangle::Rectangle(){
    length = 1;
    breath = 1;
}
Rectangle::Rectangle(int l,int b){
    length =l;
    breath = b;
}
void Rectangle::setBreath(int b){
    breath =b;
}
void Rectangle::setLength(int l){
    length = l;
}