// #include <iostream>
// using namespace std;

// int main() {

    // for (int i{1} ; i <=10 ; ++i)
    //     cout << i << endl;
        
//    for (int i{1} ; i <=10 ; i+=2)
//        cout << i << endl;

//    for (int i {10}; i > 0; --i)
//        cout << i << endl;
//    cout << "Hello!" << endl;

//    for (int i{1}, j{5} ; j>=0 ; ++i, --j)
//        cout << i << " + " << j << " = " << (i+j) << endl;

//    for ( int i{1}; i<=100; ++i) {
//        cout << i;
//        if (i % 5 ==0)
//            cout << endl;
//        else 
//            cout << " ";
//    }
//     return 0;
// }

// C++11 Feature

#include <iostream>
using namespace std;

int main() {
   
    // int scores[] {10, 20, 30};
    // for (auto  score: scores)
    //     cout << score << endl;
        
           
//    for (auto val: {1,2,3,4,5})
//        cout << val << endl;

//    for (auto c: "This is a test")
//        if (c != ' ')
//            cout << c;

   for (auto c: "This is a test")
      if (c == ' ')
          cout << "\t";
       else
           cout << c;
return 0;
}


