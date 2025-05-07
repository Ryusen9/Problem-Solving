#include <iostream>
using namespace std;
class CircularQueue {
private:
    int arr[5];
    int front, rear;
public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }
    bool isFull() {
        return (rear + 1) % 5 == front;
    }
    bool isEmpty() {
        return front == -1;
    }
    void insert(int value) {
        if (isFull()) {
            cout << "Queue is full, cannot insert " << value << endl;
        } else {
            if (front == -1) {
                front = 0;
            }
            rear = (rear + 1) % 5;
            arr[rear] = value;
            cout << "Inserted " << value << " into the queue\n";
        }
    }
    void deleteElement() {
        if (isEmpty()) {
            cout << "Queue is empty, cannot delete\n";
        } else {
            cout << "Deleted " << arr[front] << " from the queue\n";
            if (front == rear) {
                front = rear = -1;
            } else {
                front = (front + 1) % 5;
            }
        }
    }
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
        } else {
            cout << "Queue elements: ";
            int i = front;
            while (i != rear) {
                cout << arr[i] << " ";
                i = (i + 1) % 5;
            }
            cout << arr[rear] << endl;
        }
    }
};
int main() {
    CircularQueue q;
    int choice, value;
    do {
        cout << "\nCircular Queue Operations Menu:\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                q.insert(value);
                break;
            case 2:
                q.deleteElement();
                break;
            case 3:
                q.display();
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