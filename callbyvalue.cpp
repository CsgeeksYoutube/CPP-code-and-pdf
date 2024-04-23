#include<iostream>
using namespace std;
// void swap(int a, int b)
// {
//     cout<<a<<b<<endl;
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
//     cout<<a<<b<<endl;
// }
// int main()
// {
//     int x=10, y=20;
//     swap(x,y);
//     cout<<x<<y<<endl;
//     return 0;
// }

// call by address

void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a=10, b=20;
    swap(&a,&b);
    cout<<a<<b;
    return 0;
}