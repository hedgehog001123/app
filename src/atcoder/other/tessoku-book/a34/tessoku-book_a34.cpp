#include <bits/stdc++.h>
using namespace std;

int a[101010];
int grundy[101010];

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i <= 100000; i++) {
        bool Transit[3] = {false, false, false};
        if (i >= x) Transit[grundy[i-x]] = true;
        if (i >= y) Transit[grundy[i-y]] = true;
        if (Transit[0] == false) grundy[i] = 0;
        else if (Transit[1] == false) grundy[i] = 1;
        else grundy[i] = 2;
    }

    int XOR_sum = 0;
    for (int i = 0; i < n; i++) XOR_sum = (XOR_sum ^ grundy[a[i]]);
    if (XOR_sum != 0) cout << "First" << endl;
    else cout << "Second" << endl;

    return 0;
}
