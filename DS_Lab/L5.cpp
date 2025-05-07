#include <iostream>
using namespace std;
class Stack {
private:
    int arr[10];
    int top;
public:
    Stack() {
        top = -1;
    }
    bool isFull() {
        return top == 9;
    }
    bool isEmpty() {
        return top == -1;
    }
    void push(int value) {
        if (isFull()) {
            cout << "Stack is full, cannot push " << value << endl;
        } else {
            arr[++top] = value;
            cout << "Pushed " << value << " to stack" << endl;
        }
    }
    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty, cannot pop" << endl;
        } else {
            cout << "Popped " << arr[top--] << " from stack" << endl;
        }
    }
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Stack contents: ";
            for (int i = 0; i <= top; ++i)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
};
int main() {
    Stack s;
    int choice, value;
    do {
        cout << "\nStack Operations Menu:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.display();
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