#include <bits/stdc++.h>
using namespace std;

const long long mod = 998244353;

int main() {
    vector<long long> a(6);
    for (int i = 0; i < 6; i++) {
        long long x;
        cin >> x;
        x %= mod;
        a[i] = x;
    }

    cout << ((((a[0]*a[1])%mod)*a[2])%mod-(((a[3]*a[4])%mod)*a[5])%mod+mod)%mod << endl;


    return 0;
}
