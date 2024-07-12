#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<int> ans(w);
    for (int i = 0; i < w; i++) ans[i] = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            char c;
            cin >> c;
            if (c == '#') ans[j]++;
        }
    }

    for (int i = 0; i < w; i++) {
        cout << ans[i];
        if (i != w-1) cout << " ";
    }
    cout << endl;

    return 0;
}
