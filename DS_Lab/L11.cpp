#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
void readFromFile(vector<string>& list, const string& filename) {
    ifstream file("input.txt");
    string word;
    list.clear();
    while (file >> word) {
        list.push_back(word);
    }
    file.close();
}
void writeToFile(const vector<string>& list, const string& filename) {
    ofstream file(filename);
    for (const string& word : list) {
        file << word << " ";
    }
    file.close();
}
void ins(const string& value) {
    vector<string> list;
    readFromFile(list, "input.txt");
    list.push_back(value);
    writeToFile(list, "insert_output.txt");
    cout << "Inserted and written to insert_output.txt\n";
}
void del(const string& value) {
    vector<string> list;
    readFromFile(list, "input.txt");
    vector<string> result;
    for (const string& word : list) {
        if (word != value) {
            result.push_back(word);
        }
    }
    writeToFile(result, "delete_output.txt");
    cout << "Deleted and written to delete_output.txt\n";
}
void sortList() {
    vector<string> list;
    readFromFile(list, "input.txt");
    for (int i = 0; i < list.size() - 1; i++) {
        for (int j = 0; j < list.size() - i - 1; j++) {
            if (list[j] > list[j + 1]) {
                string temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
    writeToFile(list, "sort_output.txt");
    cout << "Sorted and written to sort_output.txt\n";
}
int main() {
    int choice;
    string value;
    do {
        cout << "\nMenu:\n1. Insert\n2. Delete\n3. Sort\nEnter choice (other to exit): ";
        cin >> choice;
        cin.ignore();
        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                getline(cin, value);
                ins(value);
                break;
            case 2:
                cout << "Enter value to delete: ";
                getline(cin, value);
                del(value);
                break;
            case 3:
                sortList();
                break;
            default:
                cout << "Exiting...\n";
                return 0;
        }
    } while (true);
    return 0;
}