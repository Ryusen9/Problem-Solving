#include <iostream>
#include <vector>
#include <string>
using namespace std;
class NameList {
private:
    vector<string> names;
public:
    void insert(const string& newName) {
        int i = 0;
        while (i < names.size() && names[i] < newName) {
            i++;
        }
        names.insert(names.begin() + i, newName);
    }
    int search(const string& name) {
        for (int i = 0; i < names.size(); i++) {
            if (names[i] == name) {
                return i;
            }
        }
        return -1;
    }
    void display() {
        if (names.empty()) {
            cout << "The list is empty.\n";
            return;
        }
        cout << "Sorted Name List: ";
        for (const string& name : names) {
            cout << name << " ";
        }
        cout << endl;
    }
};
int main() {
    NameList list;
    int n;
    string name;
    cout << "Enter the number of names in the sorted list: ";
    cin >> n;
    cin.ignore(); 
    cout << "Enter " << n << " names in sorted order:\n";
    for (int i = 0; i < n; i++) {
        getline(cin, name);
        list.insert(name);
    }
    cout << "Enter the name to insert: ";
    getline(cin, name);
    list.insert(name);
    cout << "Updated List: \n";
    list.display();
    int index = list.search(name);
    if (index != -1) {
        cout << "The name " << name << " is at position " << index << " in the list.\n";
    } else {
        cout << "The name " << name << " is not found in the list.\n";
    }
    return 0;
}