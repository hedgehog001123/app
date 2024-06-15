#include <bits/stdc++.h>
using namespace std;

int N, M;
string S[12];
bool is_o[12][12];

vector<int> bit_search(int i) {
    vector<int> tmp;
    while (i) {
        tmp.push_back(i % 2);
        i /= 2;
    }

    return tmp;
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) cin >> S[i];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (S[i][j] == 'o') is_o[i][j] = true;
            else is_o[i][j] = false;
        }
    }

    // bit全探索
    // 2^N

    int Answer = 9999999;
    for (int i = 0; i < (1 << N); i++) {
        int cnt = 0;
        vector<bool> judge(M);
        for (int j = 0; j < M; j++) judge[j] = false;

        vector<int> a = bit_search(i);
        for (int j = 0; j < (int)(a.size()); j++) {
            if (a[j] == 1) {
                cnt++;
                for (int k = 0; k < M; k++) {
                    if (is_o[j][k] == true) judge[k] = true;
                }
            }
        }

        bool ok = true;
        for (int j = 0; j < M; j++) {
            if (judge[j] == false) ok = false;
        }
        if (ok == true) {
            Answer = min(Answer, cnt);
        }
    }

    cout << Answer << endl;

    return 0;
}
