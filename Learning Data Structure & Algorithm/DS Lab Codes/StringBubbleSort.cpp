#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of strings: ";
    std::cin >> n;
    vector<string> stringArr(n);
    cin.ignore();
    for(int i = 0; i < n; i++) {
        cout << "Enter string " << i + 1 << ": ";
        getline(cin, stringArr[i]);
    }
    int size = stringArr.size();
    cout << "Unsorted strings: " << endl;
    for(int i = 0; i < size; i++) {
        cout << "Index " << i + 1 << ": " << stringArr[i] << endl;
    }
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(stringArr[j] > stringArr[j + 1]) {
                swap(stringArr[j], stringArr[j + 1]);
            }
        }
    }
    cout << "Sorted strings (Bubble Sort): " << endl;
    for(int i = 0; i < size; i++) {
        cout << "Index " << i + 1 << ": " << stringArr[i] << endl;
    }
    return 0;
}