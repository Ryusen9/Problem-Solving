#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
class LinkedList {
private:
    Node* head;
public:
    LinkedList() {
        head = nullptr;
    }
    void insertAtEnd(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cout << "Inserted " << value << " into the linked list\n";
    }
    void deleteValue(int value) {
        if (head == nullptr) {
            cout << "List is empty, cannot delete\n";
            return;
        }
        Node* temp = head;
        Node* prev = nullptr;
        if (temp != nullptr && temp->data == value) {
            head = temp->next;
            delete temp;
            cout << "Deleted " << value << " from the linked list\n";
            return;
        }
        while (temp != nullptr && temp->data != value) {
            prev = temp;
            temp = temp->next;
        }
        if (temp == nullptr) {
            cout << "Value not found in the list\n";
            return;
        }
        prev->next = temp->next;
        delete temp;
        cout << "Deleted " << value << " from the linked list\n";
    }
    void display() {
        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }
        Node* temp = head;
        cout << "Linked List: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main() {
    LinkedList list;
    int choice, value;
    do {
        cout << "\nLinked List Operations Menu:\n";
        cout << "1. Insert value\n";
        cout << "2. Delete value\n";
        cout << "3. Display list\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                list.insertAtEnd(value);
                break;
            case 2:
                cout << "Enter value to delete: ";
                cin >> value;
                list.deleteValue(value);
                break;
            case 3:
                list.display();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);
    return 0;
}