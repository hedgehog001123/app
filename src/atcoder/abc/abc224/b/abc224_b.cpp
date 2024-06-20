#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<int>> A(H, vector<int>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> A[i][j];
        }
    }

    bool ok = true;

    for (int i_1 = 0; i_1 < H - 1; i_1++) {
        for (int i_2 = i_1 + 1; i_2 < H; i_2++) {
            for (int j_1 = 0; j_1 < W - 1; j_1++) {
                for (int j_2 = j_1 + 1; j_2 < W; j_2++) {
                    if (A[i_1][j_1] + A[i_2][j_2] > A[i_2][j_1] + A[i_1][j_2]) ok = false;
                }
            }
        }
    }

    if (ok == true) cout << "Yes" <<endl;
    else cout << "No" << endl;

    return 0;
}
