#include <bits/stdc++.h>
using namespace std;

const long long mod = 1000000007;

long long tmp[250010];

// 前から順番に見ていき、置き換えられる場所の個数を数える。


int main() {
    long long N;
    string S;
    cin >> N >> S;
    vector<int> henka(N);
    if (N == 1 || N == 2) {
        cout << 1 << endl;
        return 0;
    }

    for (int i = 0; i < N-2; i++) {
        if (i >= 1 && henka[i-1] == 1) {
            henka[i] = 2;
            continue;
        }

        if ((S[i]=='A'&&S[i+1]=='B'&&S[i+2]=='A')||(S[i]=='B'&&S[i+1]=='A'&&S[i+2]=='B')) henka[i] = 1;
        else henka[i] = 0;
    }

    int cur = 0;
    for (int i = 0; i < N-2; i++) {
        if (i >= 1 && henka[i] == 1 && henka[i-1] == 0) cur++;
        if (henka[i] == 1) tmp[cur]++;
    }

    long long ans = 1;
    for (int i = 0; i < 250000; i++) {
        ans = (ans * (tmp[i]+1)) % mod;
    }

    cout << ans << endl;

    return 0;
}
