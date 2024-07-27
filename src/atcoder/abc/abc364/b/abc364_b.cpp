#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    // 0-index
    int cur_i, cur_j;
    cin >> cur_i >> cur_j;
    cur_i--;
    cur_j--;
    vector<string> s(h);
    for (int i = 0; i < h; i++) cin >> s[i];
    string x;
    cin >> x;
    int n = (int)x.size();

    for (int i = 0; i < n; i++) {
        if (x[i] == 'U' && cur_i != 0 && s[cur_i-1][cur_j] == '.') cur_i--;
        if (x[i] == 'D' && cur_i != h-1 && s[cur_i+1][cur_j] == '.') cur_i++;
        if (x[i] == 'L' && cur_j != 0 && s[cur_i][cur_j-1] == '.') cur_j--;
        if (x[i] == 'R' && cur_j != w-1 && s[cur_i][cur_j+1] == '.') cur_j++;
    }

    // 1-index

    cout << cur_i + 1 << " " << cur_j + 1 << endl;

    return 0;
}
