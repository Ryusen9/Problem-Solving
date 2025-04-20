#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, q;
    cin >> n >> q;
    vector<vector<int>> arr{};
    for (int i = 0; i < n; i++) {
        int arr_size;
        cin >> arr_size;
        vector<int> sub_arr{};
        for (int j = 0; j < arr_size; j++) {
            int temp;
            cin >> temp;
            sub_arr.push_back(temp);
        }
        arr.push_back(sub_arr);
    }
    for (int i = 0; i < q; i++) {
        int query, index;
        cin >> query >> index;
        cout << arr[query][index] << endl;
    }
    return 0;
}
