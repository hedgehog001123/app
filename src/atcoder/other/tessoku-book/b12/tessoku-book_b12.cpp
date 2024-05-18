#include <bits/stdc++.h>
using namespace std;

int n;

bool check(double x) {
    if (x * x * x + x >= double(n)) return true; 
    return false;
}

int main() {
    cin >> n;
    // 1 <= x^3 + x <= 100,000 から、0 < x < 50
    double left = 0, right = 50;
    while (right - left > 0.0005) {
        double mid = (right + left) / 2;
        bool ok = check(mid);
        if (ok == true) right = mid;
        if (ok == false) left = mid;
    }

    cout << left << endl;

    return 0;
}
