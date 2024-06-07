#include <bits/stdc++.h>
using namespace std;

// キューの実装
// queue<型> T 定義
// T.push(x) 最後尾にxを追加
// T.front() Tの先頭を取得
// T.pop() Tの先頭を削除
// T.empty() Tが空か

int main() {
    int q;
    cin >> q;
    queue<string> T;

    for (int i = 0; i < q; i++) {
        int a;
        cin >> a;

        if (a == 1) {
            string s;
            cin >> s;
            T.push(s);
        }
        if (a == 2) {
            cout << T.front() << endl;
        }
        if (a == 3) {
            T.pop();
        }
    }

    return 0;
}
