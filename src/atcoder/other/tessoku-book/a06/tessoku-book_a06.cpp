#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n + 1), sum_a(n + 1);
    vector<int> l(q), r(q);
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 0; i < q; i++) cin >> l[i] >> r[i];

    for(int i = 1; i <= n; i++) {
        if(i == 1) sum_a[1] = a[1];
        else sum_a[i] = sum_a[i - 1] + a[i];
    }
    
    for(int i = 0; i < q; i++) {
        cout << sum_a[r[i]] - sum_a[l[i] - 1] << endl;
    }


    return 0;
}
