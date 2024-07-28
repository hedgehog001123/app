#include <bits/stdc++.h>
using namespace std;

int ctz(int n) {
    for (int i = 0; ; i++) {
        if (n & (1 << i)) return i;
    }
}

int main() {
    int n;
    cin >> n;
    
    cout << ctz(n) << endl;

    return 0;
}