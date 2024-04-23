// #include <iostream>
// using namespace std;
// int main()
// {
//     int A[3][3]={{2,4,6},{8,6,3},{5,7,9}};
//     int B[3][3]={{12,44,16},{18,26,33},{55,87,79}};
//     int C[3][3];
//     for(int i=0;i<=2;i++)
//     {
//         for(int j=0;j<=2;j++)
//         {
//             C[i][j]=B[i][j]+A[i][j];
//             cout<<" "<<C[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
//     return 0; 
// }

#include <iostream>
using namespace std;
int main()
{
    int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;
    cout << "Enter rows and columns for 1st matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for 2nd matrix: ";
    cin >> r2 >> c2;
 
    if (c1!=r2)
    {
        cout<<"Cant be Multiplied"; 
        return 0; 
    }
 
 // Storing elements of first matrix.
    cout << endl << "Enter elements of matrix 1:" << endl;
    for(i = 0; i < r1; ++i){
        for(j = 0; j < c1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }
    }
        
    
    // Storing elements of second matrix.
    cout << endl << "Enter elements of matrix 2:" << endl;
    for(i = 0; i < r2; ++i){
        for(j = 0; j < c2; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }
    }
        
    
    
    // Multiplying matrix a and b and storing in array mult.
    for(i = 0; i < r1; ++i)
    {
        for(j = 0; j < c2; ++j) 
        { 
            mult[i][j]=0;
            for(k = 0; k < c1; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            } 
        }
    }

    // Displaying the multiplication of two matrix.
    cout << endl << "Output Matrix: " << endl;
    for(i = 0; i < r1; ++i)
    { 
        for(j = 0; j < c2; ++j)
        {
            cout << " " << mult[i][j];
            if(j == c2-1)
            cout << endl;
        }

    }
    return 0;
}