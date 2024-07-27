#include <bits/stdc++.h>
using namespace std;

long long n, a, b;

long long f(long long x) {
    return x * (n / x) * (n / x + 1) / 2;
}

int main() {
    cin >> n >> a >> b;
    long long l  = a * b / gcd(a, b);
    cout << n * (n + 1) / 2 - (f(a) + f(b) - f(l)) << endl;

    return 0;
}
