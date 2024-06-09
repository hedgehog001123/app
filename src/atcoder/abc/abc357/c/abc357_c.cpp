#include <bits/stdc++.h>
using namespace std;

int N, M, L;
char Ans[7][780][780];

int main() {
    cin >> N;
    M = pow(3, N); // N = 2のとき、M = 3^2 = 9
    L = pow(3, N - 1);
    Ans[0][0][0] = '#';
    if (N == 0) {
        cout << '#' << endl;
        return 0;
    }

    for (int n = 1; n <= 6; n++) {
        for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) {
            for (int k = 0; k < pow(3, n-1); k++) for (int l = 0; l < pow(3, n-1); l++) {
                int tmp = pow(3, n-1);
                Ans[n][i*tmp+k][j*tmp+l] = Ans[n-1][k][l];
                Ans[n][1*tmp+k][1*tmp+l] = '.';
            }
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            cout << Ans[N][i][j];
        }
        cout << endl;
    }

    return 0;
}
