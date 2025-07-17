#include <iostream>
using namespace std;
int main() {
    long long id;
    cin >> id;
    long long row = id / 4;
    long long posInRow = id % 4;
    long long column;
    if (row % 2 == 0) {
        column = posInRow; 
    } else {
        column = 3 - posInRow;
    }
    cout << row << " " << column << '\n';
    return 0;
}
