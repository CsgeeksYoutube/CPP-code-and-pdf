// #include <iostream>
// using namespace std;
// int main()
// {
// int roll;
//  cout<<"Enter your Roll No."<<endl;
//  cin>>roll;
// if(roll>0)
//  {
//  cout<<"Valid Roll No."<<endl;
//  }
// else
//  {
//  cout<<"Invalid Roll No."<<endl;
//  }
// return 0;
// }


// #include <iostream>
// using namespace std;
// int main()
// {
// int num;
//  cout<<"Enter your Number: "<<endl;
//  cin>>num;
// if(num>=20 && num<=50)
//  {
//  cout<<"btw 20 and 50"<<endl;
//  }
// else
//  {
//  cout<<"greater then 50 or less then 20"<<endl;
//  }
// if(num<12 || num>50)
//  {
//  cout<<"less then 12 or greater then 50"<<endl;
//  }
// else
//  {
//  cout<<"greater then 12 and less then 50"<<endl;
//  }
// return 0;
// }


#include <iostream>
using namespace std;
int main()
{
int a,b,c;
 cout<<"Enter 3 no.s"<<endl;
 cin>>a>>b>>c;
if(a>b && a>c)
 {
 cout<<a<<endl;
 }
else 
{
    if(b>c)
    {
     cout<<b<<endl;
    }
    else
    {
    cout<<c<<endl;
    }
}
return 0;
}