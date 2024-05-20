#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    vector<int> c(n);
    for (int i = 0; i < n; i++) cin >> s[i] >> c[i];
    
    sort(s.begin(), s.end());

    int t = 0;
    for (int i = 0; i < n; i++) {
        t += c[i];
    }
    
    cout << s[t % n] << endl;

    return 0;
}
