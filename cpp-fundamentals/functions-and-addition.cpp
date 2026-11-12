#include <iostream>
using namespace std;
//function declare here.
void add(int a, int b){
    int sum=a+b;
    cout<<"The sum of "<<a<<" and "<<b<<" is: "<<sum<<endl;
}

int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    add(a,b);
}

// types of function 
//1.int add()
//2.void function(int a, int b)
//3.int fun_name(int,int)
//4.fun_name()
//.5 i can onlly return one value in the function
