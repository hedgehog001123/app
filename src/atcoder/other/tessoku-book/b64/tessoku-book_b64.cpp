#include <bits/stdc++.h>
using namespace std;

int N, M;
int A[101010], B[101010], C[101010];
vector<pair<int, int>> G[101010];

int cur[101010];
bool kakutei[101010];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;

const int INF = 2000000000;

int main() {
    cin >> N >> M;
    for (int i = 1; i <= M; i++) {
        cin >> A[i] >> B[i] >> C[i];
        G[A[i]].push_back(make_pair(B[i], C[i]));
        G[B[i]].push_back(make_pair(A[i], C[i]));
    }

    for (int i = 1; i <= N; i++) kakutei[i] = false;
    for (int i = 1; i <= N; i++) cur[i] = INF;
    cur[1] = 0;
    Q.push(make_pair(cur[1], 1));

    while (!Q.empty()) {
        int pos = Q.top().second;
        Q.pop();

        if (kakutei[pos] == true) continue;

        for (int i = 0; i < G[pos].size(); i++) {
            int nex  = G[pos][i].first;
            int cost = G[pos][i].second;
            if(cur[nex] > cur[pos] + cost) {
                cur[nex] = cur[pos] + cost;
                Q.push(make_pair(cur[nex], nex));
            }
        }
    }

    // 答えの復元
    vector<int> Answer;
    int Place = N;
    while (true) {
        Answer.push_back(Place);
        if (Place == 1) break;

        for (int i = 0; i < G[Place].size(); i++) {
            int nex  = G[Place][i].first;
            int cost = G[Place][i].second;
            if (cur[nex] + cost == cur[Place]) {
                Place = nex;
                break;
            }
        }
    }
    reverse(Answer.begin(), Answer.end());

    for (int i = 0; i < Answer.size(); i++) {
        if (i >= 1) cout << " ";
        cout << Answer[i];
    }
    cout << endl;

    return 0;
}
