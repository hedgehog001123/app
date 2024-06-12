#include <bits/stdc++.h>
using namespace std;

bool ok[4];

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    for (int i = 0; i < 4; i++) ok[i] = false;
    vector<string> S(4);
    S[0] = "ABC";
    S[1] = "ARC";
    S[2] = "AGC";
    S[3] = "AHC";
    for (int i = 0; i < 4; i++) {
        if (a == S[i]) ok [i] = true;
        if (b == S[i]) ok [i] = true;
        if (c == S[i]) ok [i] = true;
    }

    for (int i = 0; i < 4; i++) {
        if(!ok[i]) cout << S[i] << endl;
    }

    return 0;
}
