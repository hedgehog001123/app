#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> boal(n), val(n); // boal[p] == q ... pのボールがq番目にある
    for (int i = 1; i <= n; i++) boal[i-1] = i, val[i-1] = i;
    vector<int> x(q);
    for (int i = 0; i < q; i++) cin >> x[i];

    for (int i = 0; i < q; i++) {
        int tmp1 = boal[x[i]-1]-1;
        int tmp2;
        if (tmp1 != n-1) tmp2 = tmp1 + 1;
        else tmp2 = tmp1 - 1;
        int v1 = val[tmp1];
        int v2 = val[tmp2];
        swap(val[tmp1], val[tmp2]);
        swap(boal[v1-1], boal[v2-1]);
    }

    for (int i = 0; i < n; i++) {
        cout << val[i];
        if (i != n-1) cout << " ";
    }
    cout << endl;

    return 0;
}
