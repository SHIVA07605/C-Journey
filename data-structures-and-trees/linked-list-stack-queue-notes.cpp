// #include <iostream> // including the iostream library for input and output operations
// using namespace std; // using the standard namespace to avoid prefixing std:: before standard functions and
// struct Node{ // Definition of a node in the linked list
//     int data; // defining the data part of the node
//     Node* next; // pointer to the next node in the linked list
//     Node(int val){ // constructor to initialize the node with a value
//         data=val; // assigning the value to the data part of the node
//         // initializing the next pointer to NULL
//         next=NULL;
//     }
// };
//  Node* head=NULL; // initializing the head of the linked list to NULL
// in companines this is used for storing the data in a linked list format, which allows for dynamic memory allocation and efficient insertion and deletion of elements.
// // insert at first position in the linked list
// // void insertAtFirst(int val){ // function to insert a new node at the beginning of the linked list
// //     Node* newNode=new Node(val); // creating a new node with the given value
// //     newNode->next=head; // point the next of the new node to the current head of the linked list

// //     head=newNode; // update the head to be the new node
// // }
// void insertAtLast(int val){ // function to insert a new node at the end of the linked list
//     Node* newNode=new Node(val); // creating a new node with the given value
//     if(head==NULL){ // if the linked list is empty
//         head=newNode; // make the new node the head of the linked list
//         return; // exit the function
//     }
//     Node* temp=head; // create a temporary pointer to traverse the linked list
//     while(temp->next!=NULL){ // loop until the end of the linked list is reached
//         temp=temp->next; // move to the next node in the linked list
//     }
//     temp->next=newNode; // point the next of the last node to the new node
// }
// void printLL(){
//     Node* temp=head; // create a temporary pointer to traverse the linked list
//     while(temp!=nullptr){ // loop until the end of the linked list is reached
//         cout<<temp->data<<" "; // print the data of the current node
//         temp=temp->next; // move to the next node in the linked list
//     }
//     cout <<"Null" << "\n" ; // print a new line at the end
// }
//  int main(){
//     insertAtLast(5); // inserting 5     at the end of the linked list
//     insertAtLast(4); // inserting 4     at the end of the linked list
//     insertAtLast(3); // inserting 3     at the end of the linked list
//     insertAtLast(2); // inserting 2     at the end of the linked list
//     insertAtLast(1); // inserting 1     at the end of the linked list
//     printLL(); // printing the linked list
//     return 0; // return statement to indicate successful execution
//  }

 // implement stack using array
//  #include <iostream>

//  using namespace std;
//  #define MAX 5 // defining the maximum size of the stack

//  int stack[MAX];
//  int top=-1;
//  bool isEmpty(){
//     return (top==-1);
//  }
//  bool isFull(){
//     return (top==MAX-1);
//  }
//  void push(int val){
//     if(isFull()){
//         cout<<"Stack Full"<<endl;
//         return;
//     }
//     top++;
//     stack[top]=val;
//  }
//  void pop(){
//     if(isEmpty()){
//         cout<<"Stack Empty"<<endl;
//         return;
//     }
//     top--;
//     }
//     void peek(){
//         if(isEmpty()){
//             cout<<"Stack Empty"<<endl;
//             return;
//         }
//         cout<<stack[top]<<endl;
//     }
//    void display(){
//     if(isEmpty()){
//         cout<<"Stack Empty"<<endl;
//         return;
//     }
//     for(int i=top;i>=0;i--){
//         cout<<stack[i]<<" ";
//     }
//     cout<<endl;
//    }
//    int main(){
//     push(1);
//     push(2);
//     push(3);
//     push(4);
//     push(5);
//     display();
//     peek();
//     pop();
//     display();
//     peek();
//     return 0;
//    }
//  #include <iostream>
// using namespace std;
// struct Node{
//     int data;
//     Node* next;
//     Node(int val){
//         data=val;
//         next=NULL;
//     }
// };
// Node* head=NULL;
// void push(int val){
//     Node* newNode=new Node(val);
//     if(head==NULL){
//         head=newNode;
//         return;
//     }
//     newNode->next=head;
//     head=newNode;
// }
// void pop(){
//     if(head==NULL){
//         cout<<"Stack Empty"<<endl;
//         return;
//     }
//     Node* temp=head;
//     head=head->next;
//     delete temp;
// }
// void peek(){
//     if(head==NULL){
//         cout<<"Stack Empty"<<endl;
//         return;
//     }
//     cout<<head->data<<endl; // what is meaning of -> 
//     // The '->' operator is used to access members of a struct or class through a pointer. In this case, 'head' is a pointer to a Node, and 'head->data' accesses the 'data' member of the Node that 'head' points to.
// }
// write the code given below
// #include <iostream>
// using namespace std;

// #define MAX 5

// int queueArr[MAX];
// int front = -1;
// int rear = -1;

// bool isEmpty() {
//     return (front == -1 || front > rear);
// }

// bool isFull() {
//     return (rear == MAX - 1);
// }

// void enqueue(int value) {
//     if (isFull()) {
//         cout << "Queue is Full\n";
//         return;
//     }
//     if (front == -1) {
//         front = 0;
//     }
//     rear++;
//     queueArr[rear] = value;
//     cout << value << " enqueued to queue\n";
// }

// void dequeue() {
//     if (isEmpty()) {
//         cout << "Queue is Empty\n";
//         return;
//     }
//     cout << queueArr[front] << " dequeued from queue\n";
//     front++;
    
//     // Reset pointers once all elements are removed
//     if (front > rear) {
//         front = -1;
//         rear = -1;
//     }
// }

// void display() {
//     if (isEmpty()) {
//         cout << "Queue is Empty\n";
//         return;
//     }
//     cout << "Queue elements: ";
//     for (int i = front; i <= rear; i++) {
//         cout << queueArr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     enqueue(10);
//     enqueue(20);
//     enqueue(30);
//     enqueue(40);
//     enqueue(50);

//     display();

//     dequeue();
//     dequeue();

//     display();

//     return 0;
// }


















