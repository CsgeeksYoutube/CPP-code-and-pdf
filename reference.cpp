#include<iostream>
using namespace std;
// int main(){
//     int x,z;
//     int &y=x;
//     int &p=z;
//     z=10;
//     cout<<z<<endl;
//     cout<<p<<endl;
//     x=20;
//     cout<<x<<endl;
//     y=40;
//     cout<<z<<endl;
//     y=50;
//     cout<<z<<endl;
//     p=20;
//     cout<<z<<endl;
//     cout<<x<<endl;
//     cout<<y<<endl;
//     return 0;

// }


// call by reference
void swap(int &a, int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
   
}
int main()
{
    int x=10, y=20;
    swap(x,y);
    cout<<x<<y<<endl;
    return 0;
}