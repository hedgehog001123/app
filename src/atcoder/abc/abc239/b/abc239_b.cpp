#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x;
    cin >> x;
    if (x >= 0) cout << x / 10 << endl;
    else {
        cout << (x + 1) / 10 - 1 << endl;
    }

    return 0;
}
