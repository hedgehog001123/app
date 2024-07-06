#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string t;
    cin >> n >> t;
    int x = 0, y = 0;
    // dir...0:east, 1:south, 2:west, 3:nouth
    int dir = 0;
    for (int i = 0; i < n; i++) {
        if (t[i] == 'S') {
            if (dir == 0) x++;
            if (dir == 1) y--;
            if (dir == 2) x--;
            if (dir == 3) y++;
        }
        if (t[i] == 'R') {
            dir = (dir + 1) % 4;
        }
    }
    printf("%d %d", x, y);

    return 0;
}
