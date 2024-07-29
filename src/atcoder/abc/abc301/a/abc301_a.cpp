#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int t = 0, a = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'T') t++;
        else a++;
    }
    
    if (a < t) cout << "T" << endl;
    else if (a > t) cout << "A" << endl;
    else {
        if (s[n-1] == 'T') cout << "A" << endl;
        else cout << "T" << endl;
    }

    return 0;
}
