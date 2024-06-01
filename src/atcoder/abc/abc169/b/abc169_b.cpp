#include <bits/stdc++.h>
using namespace std;

const long long INF = 1'000'000'000'000'000'000LL;

int main() {
    int n;
    cin >> n;
    long long Answer = 0;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 0) {
            cout << 0 << endl;
            return 0;
        }
    }

    Answer = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] <= INF / Answer) {
            Answer *= a[i];
        }
        else {
            cout << -1 << endl;
            return 0;
        }
    }

    cout << Answer << endl;

    return 0;
}
