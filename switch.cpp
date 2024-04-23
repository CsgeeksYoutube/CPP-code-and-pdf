// #include<iostream>
// using namespace std;
// int main()
// {
// int day;
//  cout<<"Enter a day no. :"<<endl;
//  cin>>day;
// switch(day)
//  {
//  case 1 : cout<<"Monday";
//  break;
//  case 2 : cout<<"Tuesday";
//  break;
//  case 3 : cout<<"Wednesday";
//  break; 
//  case 4 : cout<<"Thursday";
//  break;
//  case 5 : cout<<"Friday";
//  break;
//  case 6 : cout<<"Saturday";
//  break;
//  case 7 : cout<<"Sunday";
//  break;
//  default : cout<<"Invalid day no."<<endl; 
//  }
// return 0;
// }

#include <iostream>
using namespace std;
int main() {
    char letter_grade {};
    cout << "Select the grade ";
    cin >> letter_grade;
    switch (letter_grade) {
        case 'a':
        case 'A':
            cout << "90 or above" << endl;
            break;
        case 'b':
        case 'B':
            cout << "80-89"<< endl;
            break;
        case 'c':
        case 'C':
            cout << "70-79" << endl;
            
        case 'd':
        case 'D':
            cout << "60-69" << endl;
            break;
        case 'f':
        case 'F':
        {
            char confirm {};
            cout << "Are you sure (Y/N)? ";
            cin >> confirm;
            if (confirm == 'y' || confirm == 'Y') 
                cout << "OK, I guess you didn't study..." << endl;
            else if (confirm == 'n' || confirm == 'N')
                cout << "Good- go study!" << endl;
            else 
                cout << "Illegal choice" << endl;
            break;
        }
           
        default:
            cout << "Select a valid grade" << endl;
    } 
    cout << endl; 
    return 0;
}
