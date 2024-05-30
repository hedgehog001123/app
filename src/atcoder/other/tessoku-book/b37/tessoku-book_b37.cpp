// 未AC
#include <bits/stdc++.h>
using namespace std;

// 実験:n=2513とし、{0000,0001,...,2513}を全てたすことを考える
// 一の位:0~9は251回ずつ足して、0~3はもう1回たす
// 十の位:0~9は250回ずつ足して、0はもう10回・1はもう4回たす
// 百の位:0~9は200回ずつ足して、0~4はもう100回・5は14回たす
// 千の位:0~1は1000回・2は514回たす
// a[16] = {3, 1, 5, 2, 0, 0, ...};cnt = 4;

long long a[16];

int main() {
    long long n, m;
    cin >> n;
    m = n;
    // cnt:桁数 ,a:各桁の数値
    int cnt = 0;
    for (int i = 0; i < 16; i++) {
        a[i] = n % 10;
        n /= 10;
        cnt++;
        if (n == 0) {
            break;
        }
    }

    long long ans = 0;
// ansに加算していく
    for (int i = 0; i < cnt; i++) {
        for (int j = 0; j <= 9; j++) {
        }
    }

    cout << ans << endl;

    return 0;
}
