#include <iostream>
using namespace std;

//typedef userdefine data type
// int main(){
//     typedef int age;
//     age male=45,female=26;
//     cout<<male<<endl;
//     cout<<female<<endl;
// }
// enum code 

// int main()
// {
//     enum year {Jan=10,Feb,Mar,Apr,May=50,Jun,Jul,Aug,Sep=69,Oct, Nov,Dec};
//     year y=Jan;
//     cout<<Apr<<endl;
//     cout<<May<<endl;
//     cout<<Jun<<endl;
//     cout<<Jul<<endl;
//     cout<<Dec<<endl;
//     cout<<Nov<<endl;
//     cout<<y<<endl;
//     for (int i{Jan}; i <= Dec; i++)
//         cout << i << " ";
 
//     return 0;

// }

int main() {
    
    enum Dir {l,r, u, d};
    
    Dir find=l;
    
    switch (find) {
        case l:
            cout << "Searching l" << endl;
            break;
        case r:
            cout << "Searching r" << endl;
            break;
        default:
            cout << "Searching...." << endl;
    }
    
    cout <<  endl;
    return 0;
}