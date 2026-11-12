#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &arr,int sp,int mid,int ep){
    vector<int> temp;
    int i=sp;
    int j=mid+1;
    while(i<=mid && j<=ep){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=ep){
        temp.push_back(arr[j]);
        j++;
    }
    for(int k=sp;k<=ep;k++){
        arr[k]=temp[k-sp];
    }
}

void mergeSort(vector<int> arr, int sp,int ep){
    int i=sp;
    int j=mid+1;
    vector<int> temp;
    while(i<=mid && j<=ep){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    if(sp>=ep){
        int mid=sp+(ep-sp)/2;
        mergeSort(arr,sp,mid);
        mergeSort(arr,mid+1,ep);
        merge(arr,sp,mid,ep);
        return;
    }
}
int main(){
    vector<int> arr={1,5,3,2,6,4};
    mergeSort(arr,0,arr.size()-1);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
