#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int ans = 99;
    for (int i = 1; i < 100010; i++) {
        if(n % i != 0) continue;
        else {
            int a = i, b = n / i;
            int cnt = 0;
            while (a + b) {
                a /= 10;
                b /= 10;
                cnt++;
            }
            ans = min(ans, cnt);
        }
    }

    cout << ans << endl;

    return 0;
}
