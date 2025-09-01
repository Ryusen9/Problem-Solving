#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    long long totalDrink = k * l;        
    long long totalSlices = c * d;      
    long long totalSalt = p;            
    long long drinkToast = totalDrink / nl;  
    long long limeToast = totalSlices;
    long long saltToast = totalSalt / np;    
    long long result = min({drinkToast, limeToast, saltToast}) / n; 
    cout << result << "\n";
    return 0;
}
