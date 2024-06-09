#include <bits/stdc++.h>
using namespace std;

int N, S[201010], T[201010];
int Answer[201010];

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> S[i];
    for (int i = 1; i <= N; i++) cin >> T[i];
    
    Answer[1] = T[1];
    for (int i = 1; i <= N-1; i++) {
        Answer[i+1] = min(T[i+1], Answer[i]+S[i]);
    }
    Answer[1] = min(T[1], Answer[N]+S[N]);
    for (int i = 1; i <= N-1; i++) {
        Answer[i+1] = min(T[i+1], Answer[i]+S[i]);
    }

    for (int i = 1; i <= N; i++) cout << Answer[i] << endl;

    return 0;
}
