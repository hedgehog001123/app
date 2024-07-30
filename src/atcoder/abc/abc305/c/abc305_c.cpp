#include <bits/stdc++.h>
using namespace std;

char c[520][520];

int main() {
    int h, w;
    cin >> h >> w;
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            cin >> c[i][j];
        }
    }

    for (int i = 1; i <= h; i++) {
        for (int j = 1 ;j <= w; j++) {
            if (c[i][j]=='.' && (c[i+1][j]=='#')+(c[i-1][j]=='#')+(c[i][j+1]=='#')+(c[i][j-1]=='#') >= 2) {
                cout << i << " " << j << endl;
            }
        }
    }

    return 0;
}
