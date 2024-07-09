#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string t[5] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    for (int i = 0; i < 5; i++) {
        if (s == t[i]) cout << 5-i << endl;
    }

    return 0;
}
