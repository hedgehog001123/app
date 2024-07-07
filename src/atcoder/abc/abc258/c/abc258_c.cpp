#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, q;
    string s;
    cin >> n >> q >> s;
    vector<long long> query(q), x(q);
    for (int i = 0; i < q; i++) cin >> query[i] >> x[i];

    long long base = 0;

    for (int i = 0; i < q; i++) {
        if (query[i] == 1) {
            base += x[i];
        }
        if (query[i] == 2){
            cout << s[(x[i]-1-base + n * 99999999) % n] << endl;
        }
    }

    return 0;
}
