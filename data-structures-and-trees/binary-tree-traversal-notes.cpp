// #include <iostream>
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
// static int idx = -1;
// Node* buildTree(int arr[]){
//     idx++;
//     if(arr[idx]==-1){
//         return NULL;
//     }
//     Node* newNode = new Node(arr[idx]);
//     newNode->left = buildTree(arr);
//     newNode->right = buildTree(arr);
//     return newNode;
// }
// int main(){
//     int arr[] = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
//     Node* root = buildTree(arr);
//     cout << "Root: " << root->data << endl;
//     cout << "Left Child: " << root->left->data << endl;
//     cout << "Right Child: " << root->right->data << endl;
//     cout << "Left Child of Right Child: " << root->right->left->data << endl;
// #include <iostream>
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
// static int idx = -1;
// Node* buildTree(int arr[]){
//     idx++;
//     if(arr[idx]==-1){
//         return NULL;
//     }
//     Node* newNode = new Node(arr[idx]);
//     newNode->left = buildTree(arr);
//     newNode->right = buildTree(arr);
//     return newNode;
// }
// void preOrder(Node* root){
//     if(root == NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     preOrder(root->left);
//     preOrder(root->right);
// }
// void inOrder(Node* root){
//     if(root == NULL){
//         return;
//     }
//     inOrder(root->left);
//     cout<<root->data<<" ";
//     inOrder(root->right);
// }
// void postOrder(Node* root){
//     if(root == NULL){
//         return;
//     }
//     postOrder(root->left);
//     postOrder(root->right);
//     cout<<root->data<<" ";
// }
// int main(){
//     int arr[] = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
//     Node* root = buildTree(arr);
//     preOrder(root);
//     cout << endl;
//     inOrder(root);
//     cout << endl;
//     postOrder(root);
//     cout << endl;
// }
