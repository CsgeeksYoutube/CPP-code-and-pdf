#include<iostream>    
using namespace std;

class Base{
    public:
        virtual void printhello() const{
            cout<< "Hello i am csgeeks"<<endl;
        }
};
class Derived:public Base{
    public:
        void printhello() const override {
            cout<< "Hello i am print hello"<<endl;
        }
};
int main(){
    Base *p = new Base();
    p->printhello();
    Base *p1 = new Derived();
    p1->printhello();
}