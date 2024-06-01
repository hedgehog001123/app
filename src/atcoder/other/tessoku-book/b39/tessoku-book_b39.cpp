#include <bits/stdc++.h>
using namespace std;

int x[201010], y[201010];
bool used[201010];

int main() {
    int n, d;
    cin >> n >> d;
    for (int i = 1; i <= n; i++) {
        cin >> x[i] >> y[i];
    }

    int Answer = 0;
    for (int i = 1; i <= d; i++) {
        int maxValue = 0;
        int maxID = -1;
        for (int j = 1; j <= n; j++) {
            if (used[j] == true) continue;
            if (maxValue < y[j] && x[j] <= i) {
                maxValue = y[j];
                maxID = j;
            }
        }

        if (maxID != -1) {
            Answer += maxValue;
            used[maxID] = true;
        }
    }

    cout << Answer << endl;

    return 0;
}
