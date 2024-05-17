#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int data[100040];
    for (int i = 0; i < 100040; i++) data[i] = 0;
    for (int i = 0; i < n; i++) {
        data[a[i]]++;
        data[a[i] + 1]++;
        data[a[i] + 2]++;
    }
    int ans = 1;
    for (int i = 0; i < 100040; i++) {
        ans = max(ans, data[i]);
    }
    cout << ans << endl;

    return 0;
}
