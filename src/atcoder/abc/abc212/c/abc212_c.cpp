#include <bits/stdc++.h>
using namespace std;

const int INF = 2'000'000'000;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> a(N), b(M);
    for (int i = 0; i < N; i++) cin >> a[i];
    for (int i = 0; i < M; i++) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int Answer = INF;
    for (int i = 0; i < N; i++) {
        int tmp = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
        // cout << "tmp= " << tmp << endl;
        int mini = INF;
        if (tmp < M) mini = abs(a[i] - b[tmp]);
        if (tmp > 0) mini = min(mini, abs(a[i] - b[tmp-1]));
        Answer = min(Answer, mini);
    }

    cout << Answer << endl;

    return 0;
}
