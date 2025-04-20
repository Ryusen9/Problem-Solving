#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

class Student {
    private:
        vector<int> scores;
    public: 
        void input() {
            int maxScore = 5;
            for (int i = 0; i < maxScore; i++) {
                int score;
                cin >> score;
                scores.push_back(score);
            }
        }
        int calculateTotalScore() {
            int total = 0;
            for (int score : scores) {
                total += score;
            }
            return total;
        }
};
int main() {
    int n;
    cin >> n;
    vector<Student> students(n);
    for (int i = 0; i < n; i++) {
        students[i].input();
    }
    int kristen_score = students[0].calculateTotalScore();
    int max_score = 0;
    for (int i = 0; i < n; i++) {
        if (students[i].calculateTotalScore() > kristen_score) {
            max_score++;
        }
    }
    std::cout << max_score << endl;
    return 0;
}