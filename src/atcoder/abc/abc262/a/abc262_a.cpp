#include <bits/stdc++.h>
using namespace std;

int main() {
    int y;
    cin >> y;
    cout << y + (4 - (y - 2) % 4) % 4 << endl;

    return 0;
}
