#include <bits/stdc++.h>
using namespace std;

long long N, D;
long long X[201010], Y[201010];
vector<long long> G[201010];
long long Answer = 0;

int main() {
    cin >> N >> D;
    for (int i = 1; i <= N; i++) {
        cin >> X[i] >> Y[i];
        G[X[i]].push_back(Y[i]);
    }

    priority_queue<long long> Q;
    for (int i = 1; i <= D; i++) {
        for (int j : G[i]) Q.push(j);

        if (!Q.empty()) {
            Answer += Q.top();
            Q.pop();
        }
    }

    cout << Answer << endl;

    return 0;
}
