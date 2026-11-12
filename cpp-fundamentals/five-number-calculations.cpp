// write a program to check 5 numbers from the user using function and add all of them and multiply firist and last elemnt and subtrac add - multiply using fucntion and takek the input fromt the user and check if the result of subtraction is even or odd


#include <iostream>
using namespace std;

void calculate(int a, int b, int c, int d, int e){
    int sum = a + b + c + d + e;
    int product = a * e;
    int result = sum - product;
    
    cout << "The sum of the numbers is: " << sum << endl;
    cout << "The product of the first and last numbers is: " << product << endl;
    cout << "The result of subtracting the product from the sum is: " << result << endl;
}
void checkEvenOdd(int result){
    if(result % 2 == 0){
        cout << "The result is even." << endl;
    } else {
        cout << "The result is odd." << endl;
    }

}

int main(){
    cout << "Enter the five numbers: ";
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    calculate(a, b, c, d, e);
    checkEvenOdd(a + b + c + d + e - (a * e));
    
    return 0;
}


