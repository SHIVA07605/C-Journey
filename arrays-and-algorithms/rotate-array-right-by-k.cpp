#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the number of rotations: ";
    cin>>k;
    k = k % n; // to handle cases where k is greater than n
    int temp[k];
    for(int i=0; i<k; i++){
        temp[i] = arr[n-k+i];
    }
    for(int i=n-1; i>=k; i--){ // to hande i is greater than 
        arr[i] = arr[i-k];
    }
    for(int i=0; i<k; i++){
        arr[i] = temp[i];
    }
    cout<<"The rotated array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
