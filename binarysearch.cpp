#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,34,55,56,64,73,123,225,344};
    int size = 9, find = 14;
    int searchIndex, low, mid, high;
    low = 0;
    high = size-1;
    searchIndex = -1;
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == find){
            searchIndex= mid;
        }
        if(arr[mid]<find){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    } 
    if (searchIndex == -1 ){
        cout << "\nThe element " << find << " was  not found";
    }
    else{
        cout << "The element " << find << " was found at index "<< searchIndex;
    }
    return 0;
}
