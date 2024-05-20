#include <bits/stdc++.h>
using namespace std;

int main() {
    int h;
    cin >> h;
    for (int i = 1;;i++) {
        if (h < (1 << i) - 1) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
