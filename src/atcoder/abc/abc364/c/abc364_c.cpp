#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, x, y;
    cin >> n >> x >> y;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());

    long long tmp1;
    long long a_sum = 0;
    for (int i = 0; i < n; i++) {
        a_sum += a[i];
        if (a_sum > x) {
            tmp1 = i+1;
            break;
        }
        if (i == n-1) tmp1 = i+1;
    }
    long long tmp2;
    long long b_sum = 0;
    for (int i = 0; i < n; i++) {
        b_sum += b[i];
        if (b_sum > y) {
            tmp2 = i+1;
            break;
        }
        if (i == n-1) tmp2 = i+1;
    }

    cout << min(tmp1, tmp2) << endl;

    return 0;
}
