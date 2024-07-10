#include <bits/stdc++.h>
using namespace std;

bool ok[1010];

bool compare1(tuple<int, int, int>& left, tuple<int, int, int>& right) {
    if (get<0>(left) == get<0>(right)) {
        return get<2>(left) < get<2>(right);
    } 
    else {
        return get<0>(right) < get<0>(left);
    }
}

bool compare2(tuple<int, int, int>& left, tuple<int, int, int>& right) {
    if (get<1>(left) == get<1>(right)) {
        return get<2>(left) < get<2>(right);
    } 
    else {
        return get<1>(right) < get<1>(left);
    }
}

bool compare3(tuple<int, int, int>& left, tuple<int, int, int>& right) {
    if (get<0>(left)+get<1>(left) == get<0>(right)+get<1>(right)) {
        return get<2>(left) < get<2>(right);
    } 
    else {
        return get<0>(right)+get<1>(right) < get<0>(left)+get<1>(left);
    }
}

int main() {
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    vector<tuple<int, int, int>> t;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    for (int i = 0; i < n; i++) {
        t.push_back(make_tuple(a[i],b[i],i));
    }

    sort(t.begin(), t.end(), compare1);
    int x_cnt = 0;
    for (int i = 0; i < n; i++) {
        if (x_cnt == x) break;
        ok[get<2>(t[i])] = true;
        x_cnt++;
    }

    int y_cnt = 0;
    sort(t.begin(), t.end(), compare2);
    for (int i = 0; i < n; i++) {
        if (y_cnt == y) break;
        if (ok[get<2>(t[i])] == false) {
            ok[get<2>(t[i])] = true;
            y_cnt++;
        }
    }

    int z_cnt = 0;
    sort(t.begin(), t.end(), compare3);
    for (int i = 0; i < n; i++) {
        if (z_cnt == z) break;
        if (ok[get<2>(t[i])] == false) {
            ok[get<2>(t[i])] = true;
            z_cnt++;
        }
        
    }

    for (int i = 0; i < n; i++) {
        if (ok[i]) cout << i+1 << endl;
    }

    return 0;
}
