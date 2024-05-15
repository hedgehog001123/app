#include <bits/stdc++.h>
using namespace std;

int main() {
    // 鉄則本 A04
    // 概要: 10進数を10桁の2進数表記にする

    int n;
    cin >> n;

    for(int i = 9; i >= 0; i--) {
        // (1 << i) は、2^xを意味する
        cout << (n / (1 << i)) % 2;
    }
    cout << endl;

    return 0;
}
