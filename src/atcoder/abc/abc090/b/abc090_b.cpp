#include <bits/stdc++.h>
using namespace std;

int is_kaibun(int a) {
    int tmp = a, a_reverse = 0;
    while(tmp) {
        a_reverse *= 10;
        a_reverse += tmp % 10;
        tmp /= 10;
    }
    return a == a_reverse;
}

int main(){
    int a, b;
    cin >> a >> b;
    int ans = 0;
    for (int i = a; i <= b; i++) {
        if(is_kaibun(i)) ans++;
    }

    cout << ans << endl;

    return 0;
}
