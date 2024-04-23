#include <iostream>
using namespace std;

int main() {
    
    char selection {};
    do {
        cout << "\n Programming Language" << endl;
        cout << "1. C" << endl;
        cout << "2. C++" << endl;
        cout << "3. JAVA" << endl;
        cout << "Q. Quit" << endl;
        cout << "\nEnter your selection: ";
        cin >> selection;
        
        if (selection == '1')
            cout << "You chose 1 - C" << endl;
        else if (selection == '2') 
             cout << "You chose 2 - C++" << endl;
        else if (selection == '3')
            cout << "You chose 3 - Java" << endl;   
        else if (selection == 'Q' || selection == 'q')
            cout << "Goodbye..." << endl;
        else 
            cout << "Unknown option -- try again..." << endl;
    
    } while ( selection != 'q' && selection != 'Q');
    cout  << endl;
    return 0;
}