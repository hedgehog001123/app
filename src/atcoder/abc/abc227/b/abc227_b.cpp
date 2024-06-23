#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<bool> ok(N);
    for (int i = 0; i < N; i++) ok[i] = false;
    
    for (int i = 0; i < N; i++) {
        int s;
        cin >> s;
        for (int a = 1; a <= 200; a++) {
            for (int b = 1; b <= 200; b++) {
                if (4*a*b+3*a+3*b == s) ok[i] = true;
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < N; i++) {
        if (ok[i] == false) ans++;
    }

    cout << ans << endl;

    return 0;
}
