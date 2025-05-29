#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
class BinaryTree {
private:
    Node* root;
public:
    BinaryTree() {
        root = nullptr;
    }
    void insert(int value) {
        if (root == nullptr) {
            root = new Node(value);
        } else {
            insertRec(root, value);
        }
    }
    void insertRec(Node* node, int value) {
        if (value < node->data) {
            if (node->left == nullptr) {
                node->left = new Node(value);
            } else {
                insertRec(node->left, value);
            }
        } else {
            if (node->right == nullptr) {
                node->right = new Node(value);
            } else {
                insertRec(node->right, value);
            }
        }
    }
    void displayRoot() {
        if (root != nullptr) {
            cout << "Root Value: " << root->data << endl;
        } else {
            cout << "Tree is empty." << endl;
        }
    }
    void displayChildren(Node* node) {
        if (node != nullptr) {
            cout << "Parent Node Value: " << node->data << endl;
            if (node->left != nullptr) {
                cout << "Left Child: " << node->left->data << endl;
            } else {
                cout << "No Left Child" << endl;
            }
            if (node->right != nullptr) {
                cout << "Right Child: " << node->right->data << endl;
            } else {
                cout << "No Right Child" << endl;
            }
        } else {
            cout << "Node is null." << endl;
        }
    }
    void displayChildrenOfRoot() {
        displayChildren(root);
    }
};
int main() {
    BinaryTree tree;
    tree.insert(89);
    tree.insert(50);
    tree.insert(44);
    tree.insert(2);
    tree.insert(90);
    tree.insert(10);
    tree.insert(87);
    tree.displayRoot();
    tree.displayChildrenOfRoot();
    return 0;
}