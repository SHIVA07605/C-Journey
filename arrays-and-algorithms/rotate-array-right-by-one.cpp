// given a array of roatate into the right using the swap method and take the input from the user and print the rotated array
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";//taking the number of elements from the user
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";// taking input from the user
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int temp = arr[n-1]; // store the last element in a temporary variable
    for(int i=n-1; i>0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
    cout<<"The rotated array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
// what is the time complexity of this code?
// The time complexity of the given code is O(n), where n is the number of elements in the array.
// the space complexity of this code is O(1) because we are using a constant amount of extra space (the variable temp) regardless of the size of the input array.
