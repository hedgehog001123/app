#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    int ans = 1010101010;
    for (int i = 0; i <= max(x, y) * 2; i++) {
        // C を i枚買う
        int tmp = 0;
        tmp += c * i;
        tmp += max(x - (i / 2) , 0) * a;
        tmp += max(y - (i / 2) , 0) * b;

        ans = min(ans, tmp);
    }

    cout << ans << endl;

    return 0;
}
