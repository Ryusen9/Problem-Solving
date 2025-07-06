#include <iostream>
using namespace std;
int main() {
    long long N, M;
    cin >> N >> M;
    int sum = 0;
    int firstDigit = N % 10;
    int secondDigit = M % 10;
    sum = firstDigit + secondDigit;
    cout << sum << endl;
    return 0;
}