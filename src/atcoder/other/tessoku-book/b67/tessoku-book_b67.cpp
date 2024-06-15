#include <bits/stdc++.h>
using namespace std;

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

int N, M;
int A[101010], B[101010], C[101010];

int main() {
    cin >> N >> M;
    for (int i = 0; i < M; i++) cin >> A[i] >> B[i] >> C[i];
    UnionFind UF;

    vector<pair<int, int>> EdgeList;
    for (int i = 0; i < M; i++) EdgeList.push_back(make_pair(10000-C[i], i));
    sort(EdgeList.begin(), EdgeList.end());

    int Answer = 0;
    UF.init(N);
    for (int i = 0; i < EdgeList.size(); i++) {
        int idx = EdgeList[i].second;
        if (UF.same(A[idx], B[idx]) == false) {
            UF.unite(A[idx], B[idx]);
            Answer += C[idx];
        }
    }

    cout << Answer << endl;

    return 0;
}
