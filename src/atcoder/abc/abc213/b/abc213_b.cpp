#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> pairs(N);
    for (int i = 1; i <= N; i++) {
        int a;
        cin >> a;
        pairs[i-1] = make_pair(a, i);
    }

    sort(pairs.begin(), pairs.end());

    cout << pairs[N-2].second << endl;

    return 0;
}
