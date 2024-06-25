#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    if (a == b || a[0] == a[1] || b[0] == b[1]) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
