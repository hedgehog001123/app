#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, t, a;
    cin >> n >> t >> a;
    vector<int> h(n);
    for (int i = 0; i < n; i++) cin >> h[i];
    
    double mi = 1000000;
    int ans = -1;
    for (int i = 0; i < n; i++) {
        double b = t - 0.006 * h[i];
        if( abs(a - b) < mi ) {
            mi = abs(a - b);
            ans = i + 1;
        }
    }

    cout << ans << endl;

    return 0;
}
