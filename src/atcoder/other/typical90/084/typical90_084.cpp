#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    string s;
    cin >> n >> s;
    vector<long long> data;

    long long a = 0, b = 0;
    for (long long i = 0; i < n; i++) {
        if (s[i] == 'o') {
            a++;
            if (b >= 1) {
                data.push_back(b);
                b = 0;
            }
        }
        else {
            b++;
            if (a >= 1) {
                data.push_back(a);
                a = 0;
            }
        }
        if (i == n-1) data.push_back(max(a, b));
    }


    long long ans = n * (n + 1) / 2;
    // for (int i = 0; i < data.size(); i++) cout << data[i] << endl;
    for (long long i = 0; i < data.size(); i++) {
        ans -= data[i] * (data[i] + 1) / 2;
    }

    cout << ans << endl;

    return 0;
}
