#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

int a[10101010];

int main() {
    int n;
    cin >> n;

    a[1] = 1;
    a[2] = 1;
    for (int i = 3; i <= n; i++) {
        int tmp = a[i-2] + a[i-1];
        tmp %= mod;
        a[i] = tmp;
    }

    cout << a[n] << endl;

    return 0;
}
