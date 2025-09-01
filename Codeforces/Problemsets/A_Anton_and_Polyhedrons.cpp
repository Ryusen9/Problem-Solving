#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int t = 0;
    while(n--) {
        string s;
        cin >> s;
        if(s == "Tetrahedron") t += 4;
        else if(s == "Cube") t += 6;
        else if(s == "Octahedron") t += 8;
        else if(s == "Dodecahedron") t += 12;
        else if(s == "Icosahedron") t += 20;
    }
    cout << t << endl;
    return 0;
}