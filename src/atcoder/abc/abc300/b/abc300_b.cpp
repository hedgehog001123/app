#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> a(h), b(h);
    for (int i = 0; i < h; i++) cin >> a[i];
    for (int i = 0; i < h; i++) cin >> b[i];

    bool exist = false;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            bool ok = true;
            for (int k = 0; k < h; k++) {
                for (int l = 0; l < w; l++) {
                    if (a[(i+k)%h][(j+l)%w] != b[k][l]) ok = false;
                }
            }
            if (ok) exist = true;
        }
    }

    if (exist) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
