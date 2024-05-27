#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool Deleted[1000009];
    for (int i = 2; i < 1000009; i++) Deleted[i] = false;

    for (int i = 2; i < 1000009; i++) {
        if (Deleted[i] == true) continue;
        for (int j = i * 2; j <= n; j += i) {
            Deleted[j] = true;
        }
    }

    for (int i = 2; i <= n; i++) {
        if (Deleted[i] == false) cout << i << endl;
    }

    return 0;
}
