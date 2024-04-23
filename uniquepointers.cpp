#include<iostream>
#include<memory>
using namespace std;

class Testclass{
    public:
        Testclass(){
            cout<< "constructor is created"<<endl;

        }
        ~Testclass(){
            cout<<"deconstructor is created"<<endl;
        }
};

int main(){
    Testclass *ptr = new Testclass();
    delete ptr;
    // {
    //     unique_ptr<Testclass>ptr1 = make_unique<Testclass>();
    // }
    // unique_ptr<int>ptr1 = make_unique<int>(145);
    // unique_ptr<int>ptr2 = move(ptr1);
    // cout << *ptr2<<endl;
}