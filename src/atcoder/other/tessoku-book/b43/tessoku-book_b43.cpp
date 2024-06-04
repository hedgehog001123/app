#include <bits/stdc++.h>
using namespace std;

int cnt[201010];

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    
    for (int i = 0; i <= n; i++) cnt[i] = 0;
    
    for (int i = 0; i < m; i++) {
        cnt[a[i]]++;
    }

    for (int i = 1; i <= n; i++) {
        cout << m - cnt[i] << endl;
    }

    return 0;
}
