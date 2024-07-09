#include <bits/stdc++.h>
using namespace std;

const int mod = 998244353;

int main() {
    long long N;
    cin >> N;
    int tmp = N % mod;
    if (tmp < 0) tmp += mod;

    cout << tmp << endl;

    return 0;
}
