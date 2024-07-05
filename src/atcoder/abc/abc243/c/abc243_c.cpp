#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++) cin >> x[i] >> y[i];
    string s;
    cin >> s;
    vector<tuple<int, int, bool>> t;
    for (int i = 0; i < n; i++) {
        bool right;
        if (s[i] == 'R') right = true;
        else right = false;
        t.push_back(make_tuple(y[i], x[i], right));
    }
    sort(t.begin(), t.end());

    int tmp = 1;
    bool collision = false;
    t.push_back(make_tuple(1010101010, 1010101010, true));
    for (int i = 0; i < n; i++) {
        if (get<0>(t[i]) == get<0>(t[i+1])) tmp++;
        else {
            if (tmp >= 2) {
                int right_min = 1010101010, left_max = -1010101010;
                for (int idx = i; idx > i-tmp; idx--) {
                    if (get<2>(t[idx]) == true) right_min = min(right_min, get<1>(t[idx]));
                    else left_max = max(left_max, get<1>(t[idx]));
                }
                if (right_min < left_max) collision = true;
            }
            tmp = 1;}
    }

    if (collision) cout << "Yes" << endl;
    else cout << "No" << endl;

    // for (int i = 0; i < n; i++) cout << get<0>(t[i]);

    return 0;
}
