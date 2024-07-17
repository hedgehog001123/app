#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> w(n);
    for (int i = 0; i < n; i++) cin >> w[i];

    for (int i = 0; i < n; i++) {
        if (w[i] == "and" || w[i] == "not" || w[i] == "that" || w[i] == "the" || w[i] == "you") {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;

    return 0;
}
