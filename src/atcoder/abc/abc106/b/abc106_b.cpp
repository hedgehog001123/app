#include <bits/stdc++.h>
using namespace std;

int cnt_yakusu(int n) {
    int ret = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) ret++;
    }
    return ret;
}

int main() {
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i += 2) {
        if (cnt_yakusu(i) == 8) ans++; 
    }
    
    cout << ans << endl;

    return 0;
}
