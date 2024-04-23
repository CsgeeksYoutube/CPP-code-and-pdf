#include<iostream>    
using namespace std;

class Shape{
    public:
    virtual void lenght()=0;
    virtual void breath()=0;
};
class Rect:public Shape{
    public:
    void lenght(){
        cout<<"rect class lenght";
    }
    void breath(){
        cout<<"rect class breath";
    }

};
class Squr:public Shape{
    public:
    void lenght(){
        cout<<"sqr class lenght";
    }
    void breath(){
        cout<<"sqr class breath";
    }

};
int main(){
    Shape *s = new Rect();
    s->lenght();
    s=new Squr();
    s->lenght();
}