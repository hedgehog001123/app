#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(2 * n);
    vector<int> a(2 * n);
    int young = 1000000001;
    int idx = -1;
    for (int i = 0; i < n; i++) {
        cin >> s[i] >> a[i];
        s[i+n] = s[i];
        a[i+n] = a[i];
        if (a[i] < young) {
            young = a[i];
            idx = i;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << s[idx+i] << endl;
    }

    return 0;
}
