#include <iostream>
using namespace std;

class Base{
    public:
    Base(){
        cout<<"Default constructor of base class"<<endl;
    }
    Base(int x){
        cout<<"Param constructor of base class "<< x <<endl;
    }
    ~Base(){
        cout<<"Default Destructor of base class"<<endl;
    
    }
};
class Derived:public Base{
    public:
    Derived(){
       cout<<"Default constructor of Derived class"<<endl;
     
    }
    Derived(int x){
        cout<<"Param constructor of Derived class "<< x <<endl;
    }
    ~Derived(){
        cout<<"Default Destructor of Derived class"<<endl;
    
    }
    Derived(int x, int x2):Base(x2){
        cout<<"Param of Derived class "<< x <<endl;
    }
};
int main(){
    // Base obj2;
    Derived obj1(20 , 30);
}