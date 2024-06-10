#include <bits/stdc++.h>
using namespace std;

// set
// set<int> S
// S.insert(x) xを追加
// S.erase(x) xを削除
// S.count(x) xが含まれてるか0or1
// S.size() 要素数

// auto itr = S.lower_bound(x);
// if (itr == S.end()) cout << "-1" << endl;
// else cout << (*itr) << endl;

int main() {
    int Q;
    cin >> Q;
    set<int> S;
    for (int i = 0; i < Q; i++) {
        int a;
        cin >> a;
        if (a == 1) {
            int b;
            cin >> b;
            S.insert(b);
        }
        if (a == 2) {
            int b;
            cin >> b;
            S.erase(b);
        } 
        if (a == 3) {
            int b;
            cin >> b;
            auto itr = S.lower_bound(b);
            if (itr == S.end()) cout << "-1" << endl;
            else cout << (*itr) << endl;
        }
    }

    return 0;
}
