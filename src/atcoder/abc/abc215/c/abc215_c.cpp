#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    int K;
    cin >> S >> K;
    sort(S.begin(), S.end());

    int cnt = 0;
    do {
        cnt++;
        for (int i = 0; i < S.size(); i++) {
            if (cnt == K) cout << S[i];
        }
    } while(next_permutation(S.begin(), S.end()));
    
    cout << endl;

    return 0;
}
