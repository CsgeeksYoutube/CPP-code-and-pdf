#include<iostream>    
using namespace std;

class Base{
    public:
    virtual void fun(){
        cout<<"fun in base"<<endl;
    }
};
class Derived :public Base{
    public:
    void fun(){
        cout<<"fun in derived class";
    }
};
int main(){
    Base *p = new Derived();
    p->fun();
}