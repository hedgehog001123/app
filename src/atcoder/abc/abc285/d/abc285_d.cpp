#include <bits/stdc++.h>
using namespace std;

class UnionFind {
    public:
    map<string, string> par;
    map<string, long long> rank;

    string root (string str) {
        if (par.find(str) == par.end()) return str;
        else return par[str] = root(par[str]);
    }

    bool unite (string x, string y) {
        string rx = root(x), ry = root(y);
        if (rx == ry) return false;
        if (rank[rx] < rank[ry]) swap(rx, ry);
        par[ry] = rx;
        if (rank[rx] == rank[ry]) rank[rx]++;
        return true;
    }

    bool issame (string x, string y) {
        return root(x) == root(y);
    }
};

int main() {
    int n;
    cin >> n;
    UnionFind UF;
    bool ok = true;
    for (int i = 0; i < n; i++) {
        string s, t;
        cin >> s >> t;
        if (UF.issame(s, t)) ok = false;
        else UF.unite(s, t);
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
