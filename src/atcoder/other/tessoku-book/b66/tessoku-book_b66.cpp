#include <bits/stdc++.h>
using namespace std;

int N, M, Q;
int A[101010], B[101010], Query[101010], x[101010], u[101010], v[101010];

class UnionFind {
public:
	int par[100009];
	int siz[100009];

	void init(int N) {
		for (int i = 1; i <= N; i++) par[i] = -1;
		for (int i = 1; i <= N; i++) siz[i] = 1;
	}

	int root(int x) {
		while (true) {
			if (par[x] == -1) break;
			x = par[x];
		}
		return x;
	}

	void unite(int u, int v) {
		int RootU = root(u);
		int RootV = root(v);
		if (RootU == RootV) return;
		if (siz[RootU] < siz[RootV]) {
			par[RootU] = RootV;
			siz[RootV] = siz[RootU] + siz[RootV];
		}
		else {
			par[RootV] = RootU;
			siz[RootU] = siz[RootU] + siz[RootV];
		}
	}

	bool same(int u, int v) {
		if (root(u) == root(v)) return true;
		return false;
	}
};

int main() {
    set<int> rosen;
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        cin >> A[i] >> B[i];
        rosen.insert(i);
    }
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        cin >> Query[i];
        if (Query[i] == 1) cin >> x[i];
        if (Query[i] == 2) cin >> u[i] >> v[i];
    }

    UnionFind UF;
    UF.init(N);
    // クエリを逆順で考える
    for (int i = 0; i < Q; i++) {
        if (Query[i]==1) {
            rosen.erase(x[i]-1);
        }
    }

    for (int z : rosen) {
        UF.unite(A[z], B[z]);
    }

    vector<bool> Answer;
    for (int i = Q-1; i >= 0; i--) {
        if (Query[i] == 1) {
            UF.unite(A[x[i]-1], B[x[i]-1]);
        }
        if (Query[i] == 2) {
            if (UF.same(u[i], v[i]) == true) Answer.push_back(true);
            else Answer.push_back(false);
        } 
    }

    reverse(Answer.begin(), Answer.end());
    for (int i = 0; i < Answer.size(); i++) {
        if (Answer[i] == true) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}
