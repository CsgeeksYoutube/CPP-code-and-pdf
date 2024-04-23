#include<iostream>    
using namespace std;

class Demo{
public:
    int x;
    int y;
    int z;

    void Display(){
        cout<<x+y+z<<endl;
    }
};

int main()
{    
    Demo obj1;
    obj1.x=58;
    obj1.y=48;
    obj1.z=63;
    obj1.Display();
    
}