#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    bool ans = false;
    for(int i = 0; i < n - 2; i++) {
        for(int j = i + 1; j < n - 1; j++) {
            for(int k = j + 1; k < n; k++) {
                if(a[i] + a[j] + a[k] == 1000) ans = true;
            }
        }
    }

    if(ans) cout << "Yes" << endl;
    else cout << "No" <<endl;

    return 0;
}
