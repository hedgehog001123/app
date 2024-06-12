#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> P(N), Q(N);
    for (int i = 0; i < N; i++) cin >> P[i];
    for (int i = 0; i < N; i++) {
        Q[P[i]-1] = i+1;
    }
    for (int i = 0; i < N; i++) cout << Q[i] << endl;

    return 0;
}
