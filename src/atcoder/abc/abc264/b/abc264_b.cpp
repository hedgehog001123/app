#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    int tmp = max(abs(r-8), abs(c-8));

    if (tmp % 2 == 0) cout << "white" << endl;
    else cout << "black"<< endl;

    return 0;
}
