#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> S(N);
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        cin >> S[i];
        if (S[i] == "Takahashi") cnt++;
    }

    cout << cnt << endl;

    return 0;
}
