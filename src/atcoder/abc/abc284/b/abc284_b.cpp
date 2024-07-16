#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> test(t);
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (a % 2 == 1) cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}
