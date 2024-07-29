#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<bool> Deleted(309010, false);

    vector<long long> prime;
    for (int i = 2; i <= 300000; i++) {
        if (Deleted[i] == true) continue;
        prime.push_back(i);
        for (long long j = i * 2; j <= 300000; j += i) Deleted[j] = true;
    }


    int m = prime.size();

    long long ans = 0;
    for (int c_i = 2; c_i < m ; c_i++) {
        long long c = prime[c_i];
        if (c * c * 12 > n) break;
        long long tmp = n / (c*c);
        int pos = lower_bound(prime.begin(), prime.end(), tmp) - prime.begin();
        if (pos == prime.size()) pos--;
        for (int b_i = pos; b_i > 0; b_i--) {
            long long b = prime[b_i];
            tmp = n / (b * c * c);
            int pos2 = lower_bound(prime.begin(), prime.end(), (int)sqrt(tmp)) - prime.begin();
            for (int a_i = pos2; a_i >= 0; a_i--) {
                long long a = prime[a_i];
                if (a * a * b * c * c <= n && a < b && b < c) {
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}
