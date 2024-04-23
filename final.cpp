#include<iostream>    
using namespace std;

class Base{
    public:
        virtual void printhello() {
            cout<< "Hello i am csgeeks"<<endl;
        }
};
class Derived:public Base{
    public:
        void printhello() final{
            cout<< "Hello i am print hello"<<endl;
        }
};
class Derived2:public Derived{
    public:
        void printhello(){
            cout<< "Hello i am print hello"<<endl;
        }
};
int main(){
    Base *p = new Base();
    p->printhello();
    Base *p1 = new Derived();
    p1->printhello();
}