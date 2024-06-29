#include <bits/stdc++.h>
using namespace std;

int fn (int x) {
    return x * x + 2 * x + 3;
}

int main() {
    int t;
    cin >> t;

    cout << fn(fn(fn(t)+t)+fn(fn(t))) << endl;

    return 0;
}
