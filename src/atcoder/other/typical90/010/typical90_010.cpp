#include <bits/stdc++.h>
using namespace std;

int sum_point[2][101010];

int main() {
    int n;
    cin >> n;
    vector<int> c(n), p(n);
    for (int i = 0; i < n; i++) cin >> c[i] >> p[i];
    int q;
    cin >> q;
    vector<int> l(q), r(q);
    for (int i = 0; i < q; i++) cin >> l[i] >> r[i];

    int sum_one = 0, sum_two = 0;
    for (int i = 1; i <= n; i++) {
        if (c[i-1] == 1) sum_one += p[i-1];
        if (c[i-1] == 2) sum_two += p[i-1];

        sum_point[0][i] = sum_one;
        sum_point[1][i] = sum_two;
    }

    for (int i = 0; i < q; i++) {
        cout << sum_point[0][r[i]]-sum_point[0][l[i]-1] << " " << sum_point[1][r[i]]-sum_point[1][l[i]-1] << endl;
    }

    return 0;
}
