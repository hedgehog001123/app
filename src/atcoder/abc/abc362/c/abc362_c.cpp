#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> l(n), r(n);
    for (int i = 0; i < n; i++) cin >> l[i] >> r[i];

    long long lsum = 0, rsum = 0;
    for (int i = 0; i < n; i++) {
        lsum += l[i];
        rsum += r[i];
    }

    vector<long long> Ans(n);
    long long tmp = lsum;
    if (lsum <= 0 && 0 <= rsum) {
        // cout << "lsum = " << lsum << endl;
        // cout << "rsum = " << rsum << endl;

        for (int i = 0; i < n; i++) {
            if (tmp != 0) {
                long long alpha = min(r[i] - l[i], -tmp);
                tmp += alpha;
                Ans[i] = l[i] + alpha;
            }
            else {
                Ans[i] = l[i];
            }
        }

        // 出力
        cout << "Yes" << endl;
        for (int i = 0; i < n; i++) {
            cout << Ans[i];
            if (i != n-1) cout << " ";
        }
        cout << endl;
    }
    else {
        cout << "No" << endl;
    }


    return 0;
}
