#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c;

    long long r = gcd(a, gcd(b, c));
    cout << (a / r - 1) + (b / r - 1) + (c / r - 1) << endl;

    return 0;
}
