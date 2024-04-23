#include<iostream>    
using namespace std;

class Account{
    public:
    void print1(){
        cout<<"this is print   1"<<endl;
    }
    void print11(){
        cout<<"this is print   11"<<endl;
    }
    void print22(){
        cout<<"this is print   22"<<endl;
    }

};
class Saving_acc:public Account{
    public:
    void print1(){
        cout<< "this is derived class 1"<<endl;
        Account::print1();

    }
    void print2(){
        cout<< "this is derived class 2"<<endl;
        Account::print1();

    }
    void print3(){
        cout<< "this is derived class 3"<<endl;
        Account::print1();

    }
};
int main(){
    Account obj1;
    // obj1.print1();
    // Saving_acc obj2;
    // obj2.print1();
    Saving_acc *ptr = &obj1;
    ptr->print1();
    ptr->print2();

}