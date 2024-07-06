#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    reverse(a.begin(), a.end());

    int tmp = 3, cnt = 0;
    for (int i = 0; i < n; i++) {
        if (tmp >= a[i]) {
            tmp -= a[i];
            cnt++;
        }
        else {
            break;
        }
    }

    cout << n - cnt << endl;

    return 0;
}
