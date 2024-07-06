#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = 45;
    for (int i = 0; i < 9; i++) {
        n -= (s[i] - '0');
    }

    cout << n << endl;

    return 0;
}
