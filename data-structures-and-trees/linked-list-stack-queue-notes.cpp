#include <iostream>
#include <memory>
#include <queue>
#include <stack>

class LinkedList {
    struct Node {
        explicit Node(int value) : data(value) {}

        int data;
        std::unique_ptr<Node> next;
    };

public:
    void append(int value) {
        auto newNode = std::make_unique<Node>(value);
        if (!head_) {
            head_ = std::move(newNode);
            return;
        }

        Node* current = head_.get();
        while (current->next) {
            current = current->next.get();
        }
        current->next = std::move(newNode);
    }

    void print() const {
        for (const Node* current = head_.get(); current != nullptr;
             current = current->next.get()) {
            std::cout << current->data << " -> ";
        }
        std::cout << "null\n";
    }

private:
    std::unique_ptr<Node> head_;
};

int main() {
    LinkedList list;
    list.append(5);
    list.append(4);
    list.append(3);
    std::cout << "Linked list: ";
    list.print();

    std::stack<int> stack;
    stack.push(10);
    stack.push(20);
    std::cout << "Stack top: " << stack.top() << '\n';
    stack.pop();
    std::cout << "Stack top after pop: " << stack.top() << '\n';

    std::queue<int> queue;
    queue.push(10);
    queue.push(20);
    std::cout << "Queue front: " << queue.front() << '\n';
    queue.pop();
    std::cout << "Queue front after dequeue: " << queue.front() << '\n';
    return 0;
}
