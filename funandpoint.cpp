#include <iostream>  
using namespace std; 
int add(int x, int y)
{
    return x+y;
}
int sub(int x, int y)
{
    return x-y;
} 
int main(){
    int x,y;
    int (*fp)(int,int);
    fp=add;
    x=(*fp)(10,20);
    cout <<x<<endl;
    fp=sub;
    y=(*fp)(10,20);
    cout<<y<<endl;
    return 0;
}
