#include <bits/stdc++.h>
using namespace std;

const long long INF = 1'000'000'000'000'000'000;

int main() {
    long long a, b;
    cin >> a >> b;
    if (a / gcd(a, b) <= INF / b) cout << a / gcd(a, b) * b << endl;
    else cout << "Large" << endl;

    return 0;
}
