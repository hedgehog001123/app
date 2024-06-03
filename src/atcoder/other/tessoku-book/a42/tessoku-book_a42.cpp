#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> A(n), B(n);
    for (int i = 0; i < n; i++) cin >> A[i] >> B[i];

    int Answer = 0;
    for (int a = 1; a <= 100; a++) {
        for (int b = 1; b <= 100; b++) {
            int cnt = 0;
            for (int i = 0; i < n; i++) {
                if (A[i] >= a && A[i] <= a + k && B[i] >= b && B[i] <= b + k) cnt++;
            }
            Answer = max(cnt, Answer);
        }
    }

    cout << Answer << endl;

    return 0;
}
