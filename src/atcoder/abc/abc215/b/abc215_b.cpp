#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long ans = 0;
    while (n) {
        n /= 2;
        ans ++;
    }

    cout << ans - 1 << endl;

    return 0;
}
