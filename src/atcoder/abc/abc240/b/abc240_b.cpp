#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, bool> m;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        m[a] = true;
    }

    cout << (int)m.size() << endl;

    return 0;
}
