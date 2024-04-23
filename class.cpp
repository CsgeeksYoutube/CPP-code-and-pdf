// C++ program to Class and object
#include <iostream>
using namespace std;
class Channel 
{
    public:                    
    string owner;
    string channel;      
    void printname() 
    { 
        cout << channel <<" Youtube Channel Owner Name is:" << owner; 
    }
};
int main()
{
    Channel obj1,obj2;       
    obj1.owner = "vijay";
    obj1.channel = "Csgeeks";
    obj1.printname();
    obj2.owner = "vijay";
    obj2.channel = "Csgeeks2.0";
    obj2.printname();
    return 0;
}