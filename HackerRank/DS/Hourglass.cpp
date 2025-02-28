#include <iostream>
using namespace std;

int main() {
    int A[6][6];
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> A[i][j];
        }
    }
    int maxSum = -63;
    for (int i = 0; i <= 3; i++) {
        for (int j = 0; j <= 3; j++) {
            int sum = A[i][j] + A[i][j+1] + A[i][j+2]
                                + A[i+1][j+1] +
                      A[i+2][j] + A[i+2][j+1] + A[i+2][j+2];
            maxSum = max(maxSum, sum);
        }
    }
    cout << maxSum << endl;
    return 0;
}
