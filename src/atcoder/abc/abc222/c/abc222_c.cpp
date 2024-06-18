#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int>& left, pair<int, int>& right) {
    if (left.first == right.first) {
        return left.second < right.second;
    } else {
        return left.first > right.first;
    }
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<string> A(2 * N);
    for (int i = 0; i < 2 * N; i++) cin >> A[i];
    vector<pair<int, int>> P(2 * N);
    for (int i = 0; i < 2 * N; i++) {
        P[i].first  = 0; // 勝利数
        P[i].second = i+1; // 番号
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (A[P[2*j].second-1][i]=='G' && A[P[2*j+1].second-1][i]=='C') P[2*j].first++;
            if (A[P[2*j].second-1][i]=='C' && A[P[2*j+1].second-1][i]=='P') P[2*j].first++;
            if (A[P[2*j].second-1][i]=='P' && A[P[2*j+1].second-1][i]=='G') P[2*j].first++;
            if (A[P[2*j].second-1][i]=='C' && A[P[2*j+1].second-1][i]=='G') P[2*j+1].first++;
            if (A[P[2*j].second-1][i]=='G' && A[P[2*j+1].second-1][i]=='P') P[2*j+1].first++;
            if (A[P[2*j].second-1][i]=='P' && A[P[2*j+1].second-1][i]=='C') P[2*j+1].first++;
        }
        sort(P.begin(), P.end(), compare);
        // for (int i = 0; i < 2*N; i++) {
        //     cout <<"P[i].first, second = " << P[i].first << ", " << P[i].second<<endl;
        // }
    }

    for (int i = 0; i < 2*N; i++) {
        cout << P[i].second <<endl;
    }

    return 0;
}
