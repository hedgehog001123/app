#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, T;
    cin >> N >> T;
    string S;
    cin >> S;
    vector<long long> X(N);
    for (int i = 0; i < N; i++) cin >> X[i];
    vector<long long> hu, sei;
    for (int i = 0; i < N; i++) {
        if (S[i] == '1') sei.push_back(X[i]);
        else hu.push_back(X[i]);
    }
    sort(sei.begin(), sei.end());
    sort(hu.begin(), hu.end());

    long long ans = 0;
    for (int i = 0; i < (int)sei.size(); i++) {
        int tmp1 = upper_bound(hu.begin(), hu.end(), sei[i]) - hu.begin();
        int tmp2 = upper_bound(hu.begin(), hu.end(), sei[i] + 2 * T) - hu.begin();
        // cout << "tmp1, tmp2 = " << tmp1 << " " << tmp2 << endl;
        ans += tmp2 - tmp1;
    }

    cout << ans << endl;

    return 0;
}
