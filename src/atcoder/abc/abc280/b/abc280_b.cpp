#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];

    int sum = 0;
    for (int i = 0; i < n; i++) {
        cout << s[i] - sum;
        sum += s[i] - sum;
        if (i != n-1) cout << " ";
    }
    cout << endl;

    return 0;
}
