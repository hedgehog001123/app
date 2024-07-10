#include <bits/stdc++.h>
using namespace std;

bool visited[510][510];

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> a(h);
    for (int i = 0; i < h; i++) {
        cin >> a[i];
    }

    int x_pos = 0, y_pos = 0;
    while (true) {
        if (visited[x_pos][y_pos] == true) {
            cout << -1 << endl;
            return 0;
        }

        visited[x_pos][y_pos] = true;

        if (a[x_pos][y_pos] == 'U') {
            if (x_pos == 0) break;
            x_pos--;
        }
        else if (a[x_pos][y_pos] == 'D') {
            if (x_pos == h-1) break;
            x_pos++;
        }
        else if (a[x_pos][y_pos] == 'L') {
            if (y_pos == 0) break;
            y_pos--;
        }
        else if (a[x_pos][y_pos] == 'R') {
            if (y_pos == w-1) break;
            y_pos++;
        }
    }

    cout << x_pos + 1 << " " << y_pos + 1 << endl;

    return 0;
}
