#include<iostream>
using namespace std;
int max(int ,int ,int);
int main()
{
int a,b,c,d;
    cout<<"Enter three no.s ";
    cin>>a>>b>>c;
    d=max(a,b,c);
    cout<<"Maximum is "<<d<<endl;
}
int max(int x,int y,int z)
{
    if(x>y && x>z)
        return x;
    else if(y>z)
        return y;
    else
        return z;
}