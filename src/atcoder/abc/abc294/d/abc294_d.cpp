#include <bits/stdc++.h>
using namespace std;

// 呼ばれていない→呼ばれたが行ってない→行った

int main() {
    int n, q;
    cin >> n >> q;

    set<int> yobaretenai, ittenai;
    for (int i = 1; i <= n; i++) yobaretenai.insert(i);

    for (int i = 0; i < q; i++) {
        int a;
        cin >> a;
        if (a == 1) {
            int tmp = *yobaretenai.begin();
            yobaretenai.erase(tmp);
            ittenai.insert(tmp);
        }
        if (a == 2) {
            int x;
            cin >> x;
            ittenai.erase(x);
        }
        if (a == 3) {
            cout << *ittenai.begin() << endl;
        }
    }

    return 0;
}
