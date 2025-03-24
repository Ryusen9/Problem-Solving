#include <iostream>
#include <cmath>
using namespace std;

void addition (int *a, int *b) {
    int sum = *a + *b;
    int sub = abs(*a - *b);
    cout << sum << endl << sub; 
}
int main() {
    int x, y;
    cin >> x >> y;
    addition(&x, &y);
    return 0;
}