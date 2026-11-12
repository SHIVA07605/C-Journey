// remove deumplicate from the sorted and array and print the sorted array
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: "; // number of elements from the user
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "; // number of elements from the user in the array
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int j = 0;
    for(int i=0; i<n-1; i++){ // used bubble sort to sort the array in ascending order
        if(arr[i] != arr[i+1]){ // here it is comparing with the value of the next element and if it is not equal then it will add the value to the new array
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[n-1];   // add the last element to the new array
    cout<<"The sorted array after removing duplicates is: ";
    for(int i=0; i<j; i++){
        cout<<arr[i]<<" "; // 
    }
    return 0;
}