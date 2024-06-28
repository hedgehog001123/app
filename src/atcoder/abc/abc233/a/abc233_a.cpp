#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, husoku;
    cin >> x >> y;
    husoku = y - x;

    cout << max(0, (husoku + 9) / 10) << endl;

    return 0;
}
