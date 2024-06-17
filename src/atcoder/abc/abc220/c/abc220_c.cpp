#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;
    vector<long long> A(N);
    long long A_sum = 0;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        A_sum += A[i];
    }
    long long X;
    cin >> X;

    long long Answer = 0;
    Answer += (X / A_sum) * N;
    X %= A_sum;
    for (int i = 0; i < N; i++) {
        X -= A[i];
        Answer++;
        if (X < 0) {
            break;
        }
    }

    cout << Answer << endl;

    return 0;
}
