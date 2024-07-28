#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> a(3, vector<int>(3));
    vector<vector<bool>> open(3, vector<bool>(3));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
            open[i][j] = false;
        }
    }
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (a[j][k] == b) open[j][k] = true;
            }
        }
    }

    bool bingo = false;
    for (int i = 0; i < 3; i++) if (open[i][0] && open[i][1] && open[i][2]) bingo = true;
    for (int i = 0; i < 3; i++) if (open[0][i] && open[1][i] && open[2][i]) bingo = true;
    if (open[0][0] && open[1][1] && open[2][2]) bingo = true;
    if (open[2][0] && open[1][1] && open[0][2]) bingo = true;

    if (bingo) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
