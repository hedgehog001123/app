#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    bool ok = false;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if(x == a) ok = true;
    }

    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
