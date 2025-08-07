#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int score = 0;
    deque<char> dq(s.begin(), s.end());
    while (!dq.empty()) {
        char c = dq.front();
        dq.pop_front();
        if (c == 'V') {
            score += 5;
        } else if (c == 'W') {
            score += 2;
        } else if (c == 'X') {
            if (!dq.empty()) dq.pop_front(); 
        } else if (c == 'Y') {
            if (!dq.empty()) {
                char next = dq.front();
                dq.pop_front();
                dq.push_back(next); 
            }
        } else if (c == 'Z') {
            if (!dq.empty()) {
                char next = dq.front();
                if (next == 'V') {
                    score /= 5;
                    dq.pop_front();
                } else if (next == 'W') {
                    score /= 2;
                    dq.pop_front();
                }
            }
        }
    }
    cout << score << '\n';
    return 0;
}