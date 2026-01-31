#include <iostream>
#include <vector>
using namespace std;

void findAllSubsets(int arr[], int n, int idx, int m, vector<int>& subset) {
    if (m == 0) {
        cout << "{ ";
        for (int x : subset)
            cout << x << " ";
        cout << "}" << endl;
        return;
    }

    if (idx == n || m < 0) return;
    subset.push_back(arr[idx]);
    findAllSubsets(arr, n, idx + 1, m - arr[idx], subset);
    subset.pop_back();
    findAllSubsets(arr, n, idx + 1, m, subset);
}

int main() {
    // 10/01/2026 -> sum of subset
    int arr[100], n, m;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the target sum: ";
    cin >> m;
    vector<int> subset;
    cout << "Subsets with the given sum are:\n";
    findAllSubsets(arr, n, 0, m, subset);
    return 0;
}