#include<iostream>
using namespace std;
int add(int a,int b, int c=0)
{
    return a+b+c;
}
float add(float a,float b)
{
    return a+b;
}
int main()
{
 cout<<add(102,5)<<endl;
 cout<<add(62.5f,4.4f)<<endl;
 cout<<add(10,200,3)<<endl;
return 0;
}