// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of the array"<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of the array"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];

//     }
//     int largest=arr[0];
//     for (int i=0;i<n;i++){
//         if(arr[i]>largest){
//             largest=arr[i];
//         }
//     }
//     cout<<"The largest number in the array is: "<<largest<<endl;
//     return 0;
// }
#include <iostream>
using namespace std;
class A{
    public:
    int x;
    A(int v=7)  {
        x=v;
    }
};
int main(){
    
    A a1;
    A a2(10);
    cout<<a1.x<<endl;
    cout<<a2.x<<endl;
    return 0;

}
  
