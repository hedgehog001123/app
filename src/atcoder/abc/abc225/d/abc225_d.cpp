#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> front(n+1), back(n+1);
    for (int i = 0; i < n+1; i++) front[i] = 0;
    for (int i = 0; i < n+1; i++) back[i] = 0;

    for (int i = 0; i < q; i++) {
        int a;
        cin >> a;
        if (a == 1) {
            int x, y;
            cin >> x >> y;
            back[x] = y;
            front[y] = x;
        }
        if (a == 2) {
            int x, y;
            cin >> x >> y;
            back[x] = 0;
            front[y] = 0;
        }
        if (a == 3) {
            int x;
            cin >> x;
            int idx = x;
            while (true) {
                if (front[idx] != 0) idx = front[idx];
                else break;
            }
            vector<int> out;
            while (true) {
                out.push_back(idx);
                if (back[idx] != 0) idx = back[idx];
                else break;
            }
            cout << out.size() << " ";
            for (int i = 0; i < out.size(); i++) cout << out[i] << " ";
            cout << endl;
            // cout << "----" << endl;
        }
    }

    return 0;
}
