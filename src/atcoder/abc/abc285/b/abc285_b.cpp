#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j > n-2) {
                cout << j << endl;
                break;
            }
            if (s[j] == s[j+i+1]) {
                cout << j << endl;
                break;
            }
        }
    }

    return 0;
}
