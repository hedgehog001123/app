#include <bits/stdc++.h>
using namespace std;

int n, q;
int a[100010], x[100010];

// Aに含まれるxよりも小さい要素の個数をreturn;
int search(int x) {
    int pos = lower_bound(a, a + n, x) - a;
    return pos;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> q;
    for (int i = 0; i < q; i++) cin >> x[i];
    sort(a, a + n);

    for (int i = 0; i < q; i++) {
        cout << search(x[i]) << endl;
    }

    return 0;
}
