#include <bits/stdc++.h>
using namespace std;

map<long long, long long> memo;

long long f(long long n) {
    if (n == 0) return 1;

    if (memo[n] == 0) memo[n] = f(n / 2) + f(n / 3);

    return memo[n];
}

int main() {
    long long n;
    cin >> n;
    cout << f(n) << endl;

    return 0;
}
