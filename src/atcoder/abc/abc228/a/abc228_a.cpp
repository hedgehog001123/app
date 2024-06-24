#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, t, x;
    cin >> s >> t >> x;
    if (s < t) {
        if (s <= x && x < t) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    else {
        if (t <= x && x < s) cout << "No" << endl;
        else cout << "Yes" << endl;
    }

    return 0;
}
