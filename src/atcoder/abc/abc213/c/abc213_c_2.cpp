#include <bits/stdc++.h>
using namespace std;

int H, W, N;

int main() {
    cin >> H >> W >> N;
    vector<int> A(N), B(N);
    for (int i = 0; i < N; i++) cin >> A[i] >> B[i];

    auto copyA = A, copyB = B;
    sort(copyA.begin(), copyA.end());
    copyA.erase(unique(copyA.begin(), copyA.end()), copyA.end());

    sort(copyB.begin(), copyB.end());
    copyB.erase(unique(copyB.begin(), copyB.end()), copyB.end());

    for (int i = 0; i < N; i++) {
        int ansA = lower_bound(copyA.begin(), copyA.end(), A[i]) - copyA.begin();
        int ansB = lower_bound(copyB.begin(), copyB.end(), B[i]) - copyB.begin();

        printf("%d %d\n", ansA+1, ansB+1);
    }

    return 0;
}
