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
        cout << channel <<" Youtube Channel Owner Name is:" << owner << "\n\n"; 
    }
};
int main()
{
    Channel obj1,obj2; 
    Channel *ptr1,*ptr2;
    ptr1=&obj1;
    ptr2=&obj2;      
    (*ptr1).owner="Ramesh";
    (*ptr1).channel="XYZ";
    (*ptr1).printname();

    ptr1->owner = "vijay";
    ptr1->channel = "Csgeeks";
    ptr1->printname();
    
    (*ptr2).owner="Suresh";
    (*ptr2).channel="PQR";
    (*ptr2).printname();

    ptr2->owner = "vijay";
    ptr2->channel = "Csgeeks2.0";
    ptr2->printname();
    return 0;
}