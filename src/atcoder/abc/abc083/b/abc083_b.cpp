#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;
    for (int i = 1; i <= n; i++){
        int sum = 0, tmp = i;
        while(tmp) {
            sum += tmp % 10;
            tmp /= 10;
        }
        if (a <= sum and sum <= b) ans += i;
    }

    cout << ans << endl;

    return 0;
}
