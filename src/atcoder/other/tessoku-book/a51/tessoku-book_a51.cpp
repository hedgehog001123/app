#include <bits/stdc++.h>
using namespace std;

// スタックの実装
// stack<型> S 定義
// S.push(x) 一番上にxを追加
// S.top() 一番上を取得
// S.pop() 一番上を削除
// S.empty() sが空か

int main() {
    int q;
    cin >> q;
    stack<string> S;
    
    for (int i = 0; i < q; i++) {
        int a;
        cin >> a;
        if (a == 1) {
            string t;
            cin >> t;
            S.push(t);
        }
        if (a == 2) {
            cout << S.top() << endl;
        }
        if (a == 3) {
            S.pop();
        }
    }

    return 0;
}
