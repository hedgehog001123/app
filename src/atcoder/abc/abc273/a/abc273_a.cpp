#include <bits/stdc++.h>
using namespace std;

int kaijo(int n) {
    if (n == 0) return 1;
    else return n * kaijo(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << kaijo(n) << endl;

    return 0;
}
