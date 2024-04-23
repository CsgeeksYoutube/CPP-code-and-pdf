#include <iostream>  
using namespace std;  
int main(){
    int a =5;
    cout << a<<endl;
    int *p= new int;
    *p=123;
    cout << p<<endl;
    delete p;
    p=nullptr;
    cout << *p;
    int *q = new int[5];
    q[0]=152;
    cout<<  q[0]<<endl;
    delete q;
    q=nullptr;

}
