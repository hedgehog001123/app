#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    int m = n.length();

    for (int i = 0; i < m; i++) {
        if (i <= 2) cout << n[i];
        else cout << '0';
    }
    cout << endl;

    return 0;
}
