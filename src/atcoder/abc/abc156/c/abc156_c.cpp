#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++) cin >> x[i];

    int ans = 1000000000;
    for (int i = 1; i <= 100; i++) {
        int tmp = 0;
        for (int j = 0; j < n; j++) tmp += (x[j]-i)*(x[j]-i);
        ans = min(ans, tmp);
    }

    cout << ans << endl;

    return 0;
}
