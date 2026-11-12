// #include <iostream>
// #include <string>
// using namespace std;

// class Student { // class containig student details
// private:
//     int roll_no;
//     string name;
//     float marks;

// public:
//     Student(int roll, string student_name, float student_marks) { // conturctor initializing the values of the student details
//         roll_no = roll;
//         name = student_name;
//         marks = student_marks;
//     }

//     void display() {
//         cout << "Roll number: " << roll_no << '\n' // taking the input of the student details and displaying it on the screen
//              << "Name: " << name << '\n'
//              << "Marks: " << marks << '\n';
//     }
// };
// // main function to create a object and call the contructor 
// int main() {
//     Student student(1, "Asha", 95.5f);
//     student.display();
//     return 0;
// }

// compelx number addition using opertor overloading write in simple code
// #include <iostream>
// using namespace std;
// class Complex {
//     private:
//         float real;
//         float imag;

//     public:
//     Complex(float r=0, float i=0)  // constructor to initialize the values of the complex number
//         real = r;
//         imag = i;
//     };
//     Complex operator + (Complex const &obj) { // operator overloading to add two complex numbers
//         Complex s;
//         s.real = real + obj.real;
//         s.imag = imag + obj.imag;
//         return s;
//     };
//     // function to display the complex number
//     void display() {
//         cout << real << " + " << imag << "i" << endl;
//     }
//    int main(){
//         Complex c1(2,3);
//         Complex c2(5,4);
//         Complex c3 = c1 + c2
//         c3=c1+c2;
//         c3.display();
//         return 0;
//         };
#include <iostream>
using namespace std;
class employee{
    int ID;
    string name;
    int salary;
public;
void display(){
    cout<<"Enter the ID of the employee: ";
    cout<<ID<<endl;
    cout<<"Enter the name of the employee: ";
    cout<<name<<endl;
    cout<<"Enter the salary of the employee: ";
    cout<<salary<<endl;
}
Employee(int id, string emp_name, int emp_salary){
    ID=id;
    name=emp_name;
    salary=emp_salary;
}

Manager(int id, string emp_name, int emp_salary):Employee(id,emp_name,emp_salary){
    // constructor of the derived class
}
int main(){
    Employee emp(1,"Asha",50000);
    Manager mng(2,"Ravi",60000);
    cout<<"Employee details:"<<endl;
    emp.display();
    cout<<"Manager details:"<<endl;
    mng.display();
    return 0;
}
