#include <iostream>
using namespace std;
int main(){
    int a[5]={5,1,3,4,2}, m;//step1-take the array 
    // from the given array we have to sort the array in ascending order using bubble sort algorithm
    for(int i=0;i<5;i++){ //  step2-use a for loop to compare the elements of the array and swap them if they are not in the correct order
        for(int j=0;j<5-i-1;j++){
            if(a[j]<a[j+1]){
                m=a[j];
                a[j]=a[j+1];
                a[j+1]=m;
            }
        }
    }
    // Print the sorted array
    cout << "Sorted array: "; // step3-prinitng all the 
    for(int i=0;i<5;i++){
        cout << a[i] << " ";
    }
    return 0;
}