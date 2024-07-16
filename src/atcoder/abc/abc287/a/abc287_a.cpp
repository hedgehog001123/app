#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        string a;
        cin >> a;
        if (a == "For") cnt++;
    }

    if (2 * cnt > n) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
