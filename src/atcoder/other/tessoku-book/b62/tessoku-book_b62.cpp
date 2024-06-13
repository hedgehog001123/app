#include <bits/stdc++.h>
using namespace std;

int N, M, A[101010], B[101010];
bool visited[101010];
vector<int> G[101010];
stack<int> Path, Answer;

void dfs(int pos) {
    if (pos == N) {
        Answer = Path;
        return;
    }

    visited[pos] = true;
    for (int i = 0; i < G[pos].size(); i++) {
        int nex = G[pos][i];
        if (visited[nex] == false) {
            Path.push(nex);
            dfs(nex);
            Path.pop();
        }
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

    for (int i = 1; i <=N; i++) visited[i] = false;

    Path.push(1);
    dfs(1);

    vector<int> Output;
    while (!Answer.empty()) {
        Output.push_back(Answer.top());
        Answer.pop();
    }
    reverse(Output.begin(), Output.end());

    for (int i = 0; i < Output.size(); i++) {
        if (i >= 1) cout << " ";
        cout << Output[i];
    }

    cout << endl;

    return 0;
}
