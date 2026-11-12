// find the  sum of all element  in array user input and count even number in the array
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
    int sum=0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    cout<<"The sum is: "<<sum<<endl;
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            count++;
        }
    }
    cout<<"The number of even elements is: "<<count<<endl;

}