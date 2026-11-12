//write a code for the dynamic memeory of the array in c++ using a class and int main
// #include <iostream>
// using namespace std;
// int main(){
    
//     int size;
//     cout << "Enter the size of the array: ";
//     cin >> size;

//     // Dynamically allocate memory for the array
//     int* arr = new int[size];

//     // Input elements into the array
//     cout << "Enter " << size << " elements: ";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     // Display the elements of the array
//     cout << "The elements in the array are: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     // Deallocate the memory
//     delete[] arr;

//     return 0;
// }
 
// #include <iostream>
// using namespace std;
// class DynamicArray {
//     int n;
//     public:
//     DynamicArray(int count_){
//         n = count_;
//         ptr=new int[n];
//         if(ptr==NULL){
//             cout<<"Memory not allocated"<<endl;
//             exit(0);
//         }
//         cout<<"Memory successfully allocated using new"<<endl;
//     }
//     void get_data(){
//         cout<<"Enter the elements of the array: ";
//         for(int i=0;i<n;i++){
//             cin>>ptr[i];
//         }
//     }
//     void display_data(){
//         cout<<"The elements of the array are: ";
//         for(int i=0;i<n;i++){
//             cout<<ptr[i]<<" ";
//         }
//         cout<<endl;
//     }
// int main(){

// }
//dynamic memory allocation using class in c++
#include <iostream>
using namespace std;

