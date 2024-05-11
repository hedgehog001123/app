#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int cnt = 0;
    while ( n ) {
        n /= 2;
        if ( n > 0 ) cnt++;
    }

    int ans = 1;
    for (int i = 0; i < cnt; i++) {
        ans *= 2;
    }

    cout << ans << endl;

    return 0;
}
