#include <iostream>
using namespace std;
int main()
{
    char v[5]={'a' ,'e', 'i', 'o', 'u' };
    cout << "\n" << v[0] << endl;
    cout <<v[4] << endl;
 
    double h[4] = { 900.1, 809.8, 7.5, 8.6};
    cout << "\n" << h[0] << endl;
    
    h[0] = 100.7;  
    cout << h[0] << endl;

    int A[10]={2,4,6,8,12,3,5,7,9,11};
    int sum=0;

    for(int i=0;i<=9;i++)
        {
            sum=sum+A[i];
            cout<<"The sum is "<<sum<<endl;
        }
    return 0; 
}

int main()
{
    int A[3][3]={{2,4,6},{8,6,3},{5,7,9}};
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            cout<<" "<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0; 
}



