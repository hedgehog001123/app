#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> cnt(n);
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        cnt[a-1]++;
        cnt[b-1]++;
    }
    for(int i = 0; i < n; i++) {
        cout << cnt[i] << endl;
    }

    return 0;
}
