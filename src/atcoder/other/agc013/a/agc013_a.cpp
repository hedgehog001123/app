#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int ans = 0;
    for(int i = 0; i < n;) {
        ans++;
        bool zouka = true;
        bool gensyou = true;
        if (a[i] > a[i + 1]) zouka = false;
        if (a[i] < a[i + 1]) gensyou = false;
        for(int j = 0;;) {
             if (zouka or gensyou) {
                j++;
                if (a[i + j] > a[i + j + 1]) zouka = false;
                if (a[i + j] < a[i + j + 1]) gensyou = false;
             } else {
                i += j + 1;
                break;
             }
        }
    }

    cout << ans << endl;

    return 0;
}
