#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, bool> ma;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (ma[s]) continue;
        ma[s] = true;
        cout << i + 1 << endl;
    }

    return 0;
}
