#include <iostream>
using namespace std;
// int main(){
//     int a=3;
//     int v;
//     int *pv;
//     int *pa;
//     pa = &a;
//     v=*pa;
//     pv=&v;
//     cout <<"\n a= "<< a << " &a= "<<&a << " pa= "<< pa << " *pa= " << *pa;
//     cout << "\n v= "<<v << " &v= "<<&v << " pv= "<< pv << " *pv= " << *pv;
//     return 0;

// }

// int main(){
//     int u1,u2;
//     int v=3;
//     int *pv;
//     u1= 2*(v+5);
//     pv=&v;
//     u2=2*(*pv +5);
//     cout << "\n u1= "<< u1<< " u2= " << u2;
//     return 0;

// }


int main(){
    int i=2;
    int x[10]={0,1,2,3,4,5,6,7,8,9};
        cout << i << " "<< x[i]<< " " <<*(x+i) << " " << &x[i] << " " << x+i;
        return 0;
}
