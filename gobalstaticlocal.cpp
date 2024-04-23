#include<iostream>
using namespace std;
int x=54;
void display();
int main(){
    int x=5;
    {
        {
        static int y=25;
        cout<<::x<<endl;
        display();
        }
        cout<<y<<endl;   
    }
    cout<<::x<<endl;
    display();
    display();
    display();
}
void display(){
    static int x=5;
    x*=2;
    cout << x<<endl;
}