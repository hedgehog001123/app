#include <bits/stdc++.h>
using namespace std;

int main() {
    int v;
    vector<int> a(3);
    cin >> v;
    cin >> a[0] >> a[1] >> a[2];

    while (true) {
        if (v < a[0]) {
            cout << "F" << endl;
            break;
        }
        v -= a[0];
        if (v < a[1]) {
            cout << "M" << endl;
            break;
        }
        v -= a[1];
        if (v < a[2]) {
            cout << "T" << endl;
            break;
        }
        v -= a[2];
    }

    return 0;
}
