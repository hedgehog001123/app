#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool used[2 * n + 1];
    for (int i = 0; i < 2 * n + 1; i++) used[i] = false;

    for (int i = 0; i < n + 1; i++) {
        for (int j = 0; j < 2 * n + 1; j++) {
            if (used[j] == false) {
                cout << j + 1 << endl;
                used[j] = true;
                fflush(stdout);
                break;
            }
        }
        if (i == n) break;
        int aok;
        cin >> aok;
        used[aok - 1] = true;
    }

    return 0;
}
