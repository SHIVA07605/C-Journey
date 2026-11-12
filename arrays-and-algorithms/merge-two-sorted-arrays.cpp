// taking the two array and we have to find the smalled number and then merge the two array in the sorted way and then print the merged array
#include <iostream>
using namespace std;
int main(){
    int a[]={1,4,7};
    int b[]={2,3,8};
    int n=3,m=3;
    int c[n+m];
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
        }
        else{
            c[k]=b[j];
            j++;
        }
        k++;
    }
        // this is used for the remaining elements of the array if any of the array is not completely traversed
        while(i<n){
            c[k]=a[i];
            i++;
            k++;
        }
        // this is used for the remaining elements of the array if any of the array is not completely traversed means if the first array is completely traversed and the second array is not completely traversed then this loop will be executed
        while(j<m){
            c[k]=b[j];
            j++;
            k++;
        }
        // Print the merged array
    cout << "Merged array: ";
    for(int l=0;l<n+m;l++){
        cout << c[l] << " ";
    }
   
    return 0;
}