#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, i;
    cin >> N;
    int A[N];
    for(i = 0; i < N; i++) {
        cin >> A[i];
    }
    std::reverse(A, A+N);
    for(i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    return 0;
}