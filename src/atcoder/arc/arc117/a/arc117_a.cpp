#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    // 総和0
    // +がA個, -がB個
    // すべて異なる
    // -10^9~10^9,!=0

    // a=1, b=1→ 1 -1
    // a=1, b=4→ 10 -1 -2 -3 -4
    // a=2, b=3→ 1 5 -1 -2 -3
    // a=5, b=2→ 1 2 3 4 5 -1 -24

    int sum = 0;
    if (a == b) {
        for (int i = 1; i <= a; i++) cout << i << " ";
        for (int i = 1; i <= b; i++) {
            cout << (-1)*i;
            if (i != b) cout << " ";
        }
        cout << endl;
    }
    if (a > b) {
        for (int i = 1; i <= a; i++) {
            cout << i << " ";
            sum += i;
        }
        for (int i = 1; i <= b; i++) {
            if (i == b) cout << (-1)*sum << endl;
            else {
                cout << (-1)*i << " ";
                sum -= i;
            }
        }
    }
    if (a < b) {
        for (int i = 1; i <= b; i++) {
            cout << (-1)*i << " ";
            sum -= i;
        }
        for (int i = 1; i <= a; i++) {
            if (i == a) cout << (-1)*sum << endl;
            else {
                cout << i << " ";
                sum += i;
            }
        }
    }

    return 0;
}
