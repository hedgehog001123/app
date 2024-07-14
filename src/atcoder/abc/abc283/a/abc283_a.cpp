#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int c = 1;
    for (int i = 0; i < b; i++) {
        c *= a;
    }
    cout << c << endl;

    return 0;
}
