#include <bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        unsigned long long n;
        cin >> n;

        unsigned long long p = 0, q = 0;
        for (unsigned long long i = 2; i * i * i <= n; i++) {
            if (n % i != 0) continue;
            if ((n / i) % i == 0) {
                p = i;
                q = n / i / i;
            }
            else {
                q = i;
                p = n / i;
                p = (long long)sqrt(p);
            }
            break;
        }
        cout << p << " " << q << endl;
    }

    return 0;
}
