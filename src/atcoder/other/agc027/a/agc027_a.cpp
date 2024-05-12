#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(x >= a[i]) {
            x -= a[i];
            ans++;
            if(i == n - 1 && x > 0)ans--;
        } else {
            break;
        }
    }

    cout << ans << endl;

    return 0;
}
