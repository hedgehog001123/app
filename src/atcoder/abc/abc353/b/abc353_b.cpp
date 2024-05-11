#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int ans = 1;
    int kuuseki = k;
    for (int i = 0; i < n; i++) {
        if(a[i] <= kuuseki) {
            kuuseki -= a[i];
        } else {
            ans++;
            kuuseki = k;
            i = i - 1;
        }
    }

    cout << ans << endl;

    return 0;
}
