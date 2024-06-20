#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N-1), b(N-1);
    for (int i = 0; i < N-1; i++) cin >> a[i] >> b[i];
    vector<int> c(N);
    for (int i = 0; i < N; i++) c[i] = 0;
    for (int i = 0; i < N-1; i++) {
        c[--a[i]]++;
        c[--b[i]]++;
    }
    
    bool ok = false;
    for (int i = 0; i < N; i++) {
        if (c[i] == N-1) ok = true;
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
