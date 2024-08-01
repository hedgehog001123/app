#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string atcoder = "atcoder";
    int n = (int)s.size();

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (s[j] ==  atcoder[i]) {
                for (int k = j; k > i; k--) {
                    cnt++;
                    swap(s[k], s[k-1]);
                }
            }
        }
    }

    cout << cnt << endl;

    return 0;
}
