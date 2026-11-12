// create a base class animal and member name and mothod speak and then create a derived class dog and cat and override the speak method to print "Woof" for dog and "Meow" for cat. Then create objects of dog and cat and call their speak methods.
// #include <iostream>
// using namespace std;

// class Animal {
//     protected:
//         string name;
//         public:
//         Animal(string n)
//         {
//             name = n;
//         }
//         void speak() {
//             cout << "Animal speaks" << endl;
//         };
// };
// class dog: public Animal {
//     public:
//         dog(string n): Animal(n) {}
//         void speak() {
//             cout << "Woof!" << endl;
//         }
// };

// int main(){
//     string name;
//     cout<<"Enter the name: ";
//     cin>>name;
//     if(name=="Animal"){
//         Animal a(name);
//         a.speak();
//     }
//     else if(name=="dog"){
//         dog d(name);
//         d.speak();
//     }
//     else{
//         cout<<"Invalid input"<<endl;
//     }
   
// }
// create a class batterywith data member capacity that prints message in its conturctor and destructor he then created a device class that ows battery object as a member
// the device class also prints message in its constructor and destructor. In the main function create a device object and observe the order of constructor and destructor calls.

#include <iostream>
using namespace std;
class Battery{
    
    int capacity;
    public:
        Battery(int c){
            capacity=c;
            cout<<"Battery is creeated"<<endl;

        }
};
class device: public Battery{
    string brand_name;
    public:
        device(string b_n, int c) {
            brand_name=b_n;
            capacity=c;
        }
        void display() {
            cout<<"Brand name: "<<brand_name<<endl;
            cout<<"Capacity: "<<capacity<<endl;
        }
};    
       