// //Building a Binary search tree
// #include <iostream>
// #include<vector>
// using namespace std;
// class Node{
// public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val){
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };
// Node* insertTree(Node* root, int value){
// //base case
//     if(root == NULL){
//         return new Node(value);
//     }
//     //small problem
//     if(value < root->data){
//         root->left = insertTree(root->left, value);
//     }
//     else{
//         root->right = insertTree(root->right, value);
//     }
//     return root;
// }
// Node* buildTree(vector<int> arr){
//     Node* root = NULL;
//     for(int i=0;i<arr.size();i++){
//         root = insertTree(root, arr[i]);
//     }
//     return root;
// }
// void inOrder(Node* root){
//     if(root == NULL){
//         return;
//     }
//     inOrder(root->left);
//     cout<<root->data<<" ";
//     inOrder(root->right);
// }
// int main(){
//     vector<int> arr = {3,2,1,5,6,4};
//     Node* root = buildTree(arr);
//     cout<<"Binary search tree: ";
//     inOrder(root);
//     cout<<endl;
// }


// //Building a Binary search tree
// #include <iostream>
// #include<vector>
// using namespace std;
// class Node{
// public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val){
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };
// Node* insertTree(Node* root, int value){
// //base case
//     if(root == NULL){
//         return new Node(value);
//     }
//     //small problem
//     if(value < root->data){
//         root->left = insertTree(root->left, value);
//     }
//     else{
//         root->right = insertTree(root->right, value);
//     }
//     return root;
// }
// Node* buildTree(vector<int> arr){
//     Node* root = NULL;
//     for(int i=0;i<arr.size();i++){
//         root = insertTree(root, arr[i]);
//     }
//     return root;
// }
// void inOrder(Node* root){
//     if(root == NULL){
//         return;
//     }
//     inOrder(root->left);
//     cout<<root->data<<" ";
//     inOrder(root->right);
// }
// int main(){
//     vector<int> arr = {3,2,1,5,6,4};
//     Node* root = buildTree(arr);
//     cout<<"Binary search tree: ";
//     inOrder(root);
//     cout<<endl;
// }
voi
