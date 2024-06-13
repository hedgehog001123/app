#include <bits/stdc++.h>
using namespace std;

int N, M;
int A[101010], B[101010];
vector<int> G[101010];
bool visited[101010];

void dfs(int pos) {
    visited[pos] = true;
    for (int i = 0; i < G[pos].size(); i++) {
        int nex = G[pos][i];
        if (visited[nex] == false) dfs(nex);
    }
    return;
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        cin >> A[i] >> B[i];
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }

    for (int i = 1; i <= N; i++) visited[i] = false;
    dfs(1);
    string Answer = "The graph is connected.";
    for (int i = 1; i <= N; i++) {
        if (visited[i] == false) Answer = "The graph is not connected.";
    }
    cout << Answer << endl;

    return 0;
}
