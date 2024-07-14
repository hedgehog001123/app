#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x, k;
    cin >> x >> k;

    long long tmp = 10;
    for (int i = 0; i < k; i++) {
        // cout << x << endl;
        long long a = x % tmp;
        long long p = x-a, q = x-a+tmp;
        if (abs(p - x) >= q - x) x = q;
        else x = p;
        tmp *= 10;
    }

    cout << x << endl;

    return 0;
}
