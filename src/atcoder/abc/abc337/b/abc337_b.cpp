#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = (int)s.size();

    string t = s;
    sort(t.begin(), t.end());

    for (int i = 0; i < n; i++) {
        if (s[i] != t[i]) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}
