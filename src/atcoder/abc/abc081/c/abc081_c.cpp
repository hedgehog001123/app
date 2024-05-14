#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> backet(n + 10);
    for(int i = 0; i < n; i++) {
        backet[a[i]]++;
    }
    sort(backet.begin(), backet.end(), greater<int>());
    int ans = 0;
    for(int i = k; i < n + 5; i++) {
        ans += backet[i];
    }
    
    cout << ans << endl;

    return 0;
}
