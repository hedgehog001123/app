#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> b;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a % 2 == 0) b.push_back(a);
    }

    for (int i = 0; i < (int)b.size(); i++) {
        cout << b[i];
        if (i != (int)b.size() - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
