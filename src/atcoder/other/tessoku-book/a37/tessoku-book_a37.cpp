#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, b;
    cin >> n >> m >> b;
    vector<long long> a(n);
    vector<long long> c(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> c[i];

    int a_sum = 0, c_sum = 0;
    for (int i = 0; i < n; i++) a_sum += a[i];
    for (int i = 0; i < m; i++) c_sum += c[i];

    cout << a_sum * m + b * n * m + c_sum * n << endl;

    return 0;
}
