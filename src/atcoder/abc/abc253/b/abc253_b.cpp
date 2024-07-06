#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for (int i = 0; i < h; i++) cin >> s[i];

    vector<vector<int>> a(2, vector<int>(2));
    int tmp = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (s[i][j] == 'o') {
                a[tmp][0] = i;
                a[tmp][1] = j;
                tmp++;
            } 
        }
    }

    cout << abs(a[0][0]-a[1][0]) + abs(a[0][1]-a[1][1]) << endl;

    return 0;
}
