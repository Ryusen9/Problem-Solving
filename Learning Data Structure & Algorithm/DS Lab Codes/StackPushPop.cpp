#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    int choice, value;
    while(true) {
        std::cout << "\n------ Stack Menu ------\n";
        std::cout << "Enter your choice: " << endl;
        std::cout << "1. Push\n2. Pop\n3. Display\n4. Exit\n";
        std::cin >> choice;
        switch(choice) {
            case 1:
                std::cout << "Enter value to push: ";
                std::cin >> value;
                s.push(value);
                break;
            case 2:
                if(!s.empty()) {
                    std::cout << "Popped value: " << s.top() << endl;
                    s.pop();
                } else {
                    std::cout << "Stack is empty!" << endl;
                }
                break;
            case 3: 
                if(!s.empty()) {
                    stack<int> temp = s;
                    std::cout << "Stack element (top to bottom): " << endl;
                    while(!temp.empty()) {
                        std::cout << temp.top() << " ";
                        temp.pop();
                    }
                } else {
                    std::cout << "Stack is empty!" << endl;
                }
                break;
            case 4: 
                std::cout << "Exiting..." << endl;
                return 0;
            default:
                std::cout << "Invalid choice! Please try again." << endl;
                break;
        }
    }
    return 0;
}