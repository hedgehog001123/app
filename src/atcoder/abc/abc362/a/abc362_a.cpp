#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    string s;
    cin >> a >> b >> c >> s;

    if (s == "Red") cout << min(b, c) << endl;
    if (s == "Green") cout << min(a, c) << endl;
    if (s == "Blue") cout << min(a, b) << endl;

    return 0;
}
