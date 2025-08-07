#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s;
    cin >> s;
    string Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    if(n != 1) {
        for(int i = 0; i < s.length(); i++) {
            int idx = 0;
            idx = Key.find(s[i], idx);
            cout << Original[idx];
        } 
    } else {
            for(int i = 0; i < s.length(); i++) {
                int idx = 0;
                idx = Original.find(s[i], idx);
                cout << Key[idx];
            }
        }
    return 0;
}