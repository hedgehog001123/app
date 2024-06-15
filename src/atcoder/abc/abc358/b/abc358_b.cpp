#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A;
    cin >> N >> A;
    vector<int> T(N);
    for (int i = 0; i < N; i++) cin >> T[i];

    vector<int> Answer;
    for (int i = 0; i < N; i++) {
        if (i == 0) {
            cout << T[0] + A << endl;
            Answer.push_back(T[0] + A);
        }
        else {
            cout << max(T[i]+A, Answer[i-1]+A) << endl;
            Answer.push_back(max(T[i]+A, Answer[i-1]+A));
        }
    }

    return 0;
}
