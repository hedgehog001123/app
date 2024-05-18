#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[100010];

bool check(long long x) {
    long long sum = 0;
    for (int i = 1; i <= n; i++) sum += x / a[i];

    if (sum >= k) return true;
    return false;
}

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];

    long long l = 1, r = 1'000'000'000;
    while (r - l > 0) {
        long long m = (l + r) / 2;
        bool ok = check(m); // 答えは1以上m以下か
        if(ok) r = m;
        else l = m + 1;
    }

    cout << l << endl;
}
