#include <iostream>
using namespace std;
#define SIZE 50 
int main()
{
    int array[SIZE];
    int i, max, min, size;
    cout << "Enter size of the array: ";
    cin >> size;
    cout << "\n Enter the marks of " << size << " students: ";
    
    for (i = 0; i < size; i++)
        cin >> array[i];

    max = array[0];
    min = array[0];
    for (i = 1; i < size; i++)
    {
        if (array[i] > max)
            max = array[i];

        if (array[i] < min)
            min = array[i];
    }
    cout << "\nMaximum marks =" << max << "\n";
    cout << "Minimum marks =" << min;
    return 0;
}

// #include <iostream>
// #include <conio.h>
// using namespace std;
// int main()
// {
//     int num[]= {12,9,37,86,2,17,5};
//     int i,x,f;
//     cout<<"\n\nEnter number to search ";
//     cin>>x;
//     f=0;
//     for(i=0; i<7; i++)
//     {
//         if(x==num[i])
//         {
//             cout<<"Number found at index "<<i;
//             f=1;
//             break;
//         }
//     }
//     if(f==0)
//     {
//         cout<<"Number not found";
//     }
//     return 0;
// }