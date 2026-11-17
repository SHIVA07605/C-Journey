#include <iostream>
#include <memory>
#include <vector>

struct Node {
    explicit Node(int value) : data(value) {}

    int data;
    std::unique_ptr<Node> left;
    std::unique_ptr<Node> right;
};

void insert(std::unique_ptr<Node>& root, int value) {
    if (!root) {
        root = std::make_unique<Node>(value);
    } else if (value < root->data) {
        insert(root->left, value);
    } else if (value > root->data) {
        insert(root->right, value);
    }
}

void printInOrder(const Node* root) {
    if (root == nullptr) {
        return;
    }
    printInOrder(root->left.get());
    std::cout << root->data << ' ';
    printInOrder(root->right.get());
}

int main() {
    const std::vector<int> values{3, 2, 1, 5, 6, 4};
    std::unique_ptr<Node> root;
    for (int value : values) {
        insert(root, value);
    }

    std::cout << "Binary search tree (in-order): ";
    printInOrder(root.get());
    std::cout << '\n';
    return 0;
}
