// #include <iostream>
// using namespace std;
// int main()
// {
// float r,area;
//  cout<<"Enter the Radius";
//  cin>>r;
//  area=3.14f*r*r;
//  cout<<"Area is "<<area<<endl;
// return 0;
// }

// Compound Arithmetic Operator
// #include <iostream>
// using namespace std;
// int main()
// {
// int sum=10,x=5;
//  sum+=x;
//  cout<<sum<<endl;
// int fact=10,y=5;
//  fact*=y;
//  cout<<fact<<endl;
// return 0;
// }

// Increment ans Decrement Operators
// #include <iostream>
// using namespace std;
// int main()
// {
// int a=5,b;
//  b=a++;
//  cout<<b<<" "<<a<<endl;
// int c=5,d;
//  d=++c;
//  cout<<c<<" "<<d<<endl;
// int e=5,f;
//  f=2*e++;
//  cout<<e<<" "<<f<<endl;;
// int g=5,h;
//  h=2*g++ + 2*g++;
//  cout<<g<<" "<<h<<endl;
// return 0;
// }

// Program to Demonstrate bitwise operators
#include <iostream>
using namespace std;
int main()
{
int a=10,b=5,c;
 c=a&b;
 cout<<c<<endl;
int d=11,e=7,f;
 f=d|e;
 cout<<f<<endl;
int g=10,h=7,i;
 i=g^h;
 cout<<i<<endl;
char j=4,k;
 k=j<<1;
 cout<<(int)k<<endl;
char l=20,m;
 m=l>>1;
 cout<<(int)m<<endl;
char x=5,y;
 y= ~ x;
 cout<<(int)y<<endl;
return 0;
}