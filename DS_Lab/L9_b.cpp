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
class BinarySearchTree {
private:
    Node* root;
public:
    BinarySearchTree() {
        root = nullptr;
    }
    void insert(int value) {
        root = insertRec(root, value);
    }
    Node* insertRec(Node* node, int value) {
        if (node == nullptr) {
            return new Node(value);
        }
        if (value < node->data) {
            node->left = insertRec(node->left, value);
        } else {
            node->right = insertRec(node->right, value);
        }
        return node;
    }
    void deleteValue(int value) {
        root = deleteRec(root, value);
    }
    Node* deleteRec(Node* node, int value) {
        if (node == nullptr) return node;
        if (value < node->data) {
            node->left = deleteRec(node->left, value);
        } else if (value > node->data) {
            node->right = deleteRec(node->right, value);
        } else {
            if (node->left == nullptr) {
                Node* temp = node->right;
                delete node;
                return temp;
            } else if (node->right == nullptr) {
                Node* temp = node->left;
                delete node;
                return temp;
            }
            Node* temp = minValueNode(node->right);
            node->data = temp->data;
            node->right = deleteRec(node->right, temp->data);
        }
        return node;
    }
    Node* minValueNode(Node* node) {
        Node* current = node;
        while (current && current->left != nullptr) {
            current = current->left;
        }
        return current;
    }
    void inorder() {
        inorderRec(root);
        cout << endl;
    }
    void inorderRec(Node* node) {
        if (node != nullptr) {
            inorderRec(node->left);
            cout << node->data << " ";
            inorderRec(node->right);
        }
    }
};
int main() {
    BinarySearchTree bst;
    bst.insert(67);
    bst.insert(98);
    bst.insert(23);
    bst.insert(33);
    bst.insert(65);
    bst.insert(100);
    bst.insert(40);
    cout << "Inorder traversal of the BST: ";
    bst.inorder();
    bst.deleteValue(20);
    cout << "Inorder traversal after deleting 20: ";
    bst.inorder();
    bst.deleteValue(30);
    cout << "Inorder traversal after deleting 30: ";
    bst.inorder();
    bst.deleteValue(50);
    cout << "Inorder traversal after deleting 50: ";
    bst.inorder();
    return 0;
}