#include<iostream>    
using namespace std;

class Shape{
    public:
    virtual void lenght()=0;
    virtual void breath()=0;
    virtual ~Shape(){
        cout<<"virtual distructor is called"<<endl;
    }
};
class Rect:public Shape{
    public:
    void lenght(){
        cout<<"rect class lenght"<<endl;
    }
    void breath(){
        cout<<"rect class breath"<<endl;
    }
    virtual ~Rect(){
        cout<<"virtual distructor of Rect is called"<<endl;
    }

};
class Squr:public Shape{
    public:
    void lenght(){
        cout<<"sqr class lenght"<<endl;
    }
    void breath(){
        cout<<"sqr class breath"<<endl;
    }
    virtual ~Squr(){
        cout<<"virtual distructor of squr is called"<<endl;
    }

};
int main(){
    Shape *s = new Rect();
    s->lenght();

    // s=new Squr();
    // s->lenght();
    delete s;
}