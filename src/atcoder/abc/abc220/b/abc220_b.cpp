#include <bits/stdc++.h>
using namespace std;

long long calculate(long long k, long long a, long long b) {
    long long x = 0, y = 0;
    long long i = 1, j = 1;
    while(a>0) {
        x += (a % 10) * i;
        a /= 10;
        i *= k;
    }
    while(b>0) {
        y += (b % 10) * j;
        b /= 10;
        j *= k;
    }

    return x * y;
}

int main() {
    long long k, a, b;
    cin >> k >> a >> b;

    cout << calculate(k, a, b) << endl;

    return 0;
}
