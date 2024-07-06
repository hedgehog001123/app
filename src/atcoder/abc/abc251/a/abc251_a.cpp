#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = (int)s.size();
    for (int i = 0; i < 6; i += n) {
        cout << s;
    }
    cout << endl;

    return 0;
}
