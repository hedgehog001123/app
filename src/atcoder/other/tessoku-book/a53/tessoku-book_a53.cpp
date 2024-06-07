#include <bits/stdc++.h>
using namespace std;

// 優先度付きキュー
// priority_queue<型> T 定義
// priority_queue<int, vecotr<int>, greater<int>> T 定義2
// T.push(x) Xを追加
// T.top() 最小要素を取得
// T.pop() 最小要素を削除
// T.empty() Tが空か

int main() {
    int q;
    cin >> q;
    priority_queue<int, vector<int>, greater<int>> T;

    for (int i = 0; i < q; i++) {
        int a;
        cin >> a;
        if (a == 1) {
            int b;
            cin >> b;
            T.push(b);
        }
        if (a == 2) {
            cout << T.top() << endl;
        }
        if (a == 3) {
            T.pop();
        }
    }

    return 0;
}
