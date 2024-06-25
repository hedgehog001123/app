#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    bool isHard = false;
    while (a && b) {
        if ((a % 10) + (b % 10) >= 10) isHard = true;
        a /= 10;
        b /= 10;
    }

    if (isHard) cout << "Hard" << endl;
    else cout << "Easy" << endl;

    return 0;
}
