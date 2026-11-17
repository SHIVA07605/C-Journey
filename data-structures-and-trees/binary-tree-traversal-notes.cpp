#include <iostream>
#include <memory>
#include <vector>

struct Node {
    explicit Node(int value) : data(value) {}

    int data;
    std::unique_ptr<Node> left;
    std::unique_ptr<Node> right;
};

std::unique_ptr<Node> buildTree(const std::vector<int>& values,
                                std::size_t& index) {
    if (index >= values.size()) {
        return nullptr;
    }

    const int value = values[index++];
    if (value == -1) {
        return nullptr;
    }

    auto node = std::make_unique<Node>(value);
    node->left = buildTree(values, index);
    node->right = buildTree(values, index);
    return node;
}

void printPreOrder(const Node* root) {
    if (root == nullptr) {
        return;
    }
    std::cout << root->data << ' ';
    printPreOrder(root->left.get());
    printPreOrder(root->right.get());
}

void printInOrder(const Node* root) {
    if (root == nullptr) {
        return;
    }
    printInOrder(root->left.get());
    std::cout << root->data << ' ';
    printInOrder(root->right.get());
}

void printPostOrder(const Node* root) {
    if (root == nullptr) {
        return;
    }
    printPostOrder(root->left.get());
    printPostOrder(root->right.get());
    std::cout << root->data << ' ';
}

int main() {
    const std::vector<int> encoded{1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    std::size_t index = 0;
    const std::unique_ptr<Node> root = buildTree(encoded, index);
    if (index != encoded.size()) {
        std::cerr << "The encoded tree contains unused values.\n";
        return 1;
    }

    std::cout << "Pre-order: ";
    printPreOrder(root.get());
    std::cout << "\nIn-order: ";
    printInOrder(root.get());
    std::cout << "\nPost-order: ";
    printPostOrder(root.get());
    std::cout << '\n';
    return 0;
}
