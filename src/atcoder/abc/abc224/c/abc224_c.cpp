#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> X(N), Y(N);
    for (int i = 0; i < N; i++) cin >> X[i] >> Y[i];

    int cnt = 0;
    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            for (int k = j + 1; k < N; k++) {
                // S = |ad-bc|/2
                int a = X[i] - X[j];
                int b = Y[i] - Y[j];
                int c = X[i] - X[k];
                int d = Y[i] - Y[k];
                if (abs(a*d-b*c) != 0) cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}
