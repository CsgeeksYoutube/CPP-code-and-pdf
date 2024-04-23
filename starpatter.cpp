#include <iostream>
using namespace std;
int main()
{
    int  i, j, n,s;
    cout << "Enter number of rows:  ";
    cin >> n;
    int x=n;
    for(i = 1; i <=x; i++){
        for(s=(n=n-1);s>=0;s--){
            cout<<" ";
        }
        for(j = 1; j <=i; j++){
                cout<< "* ";
            }
        cout << "\n";
    }
    return 0;
}


