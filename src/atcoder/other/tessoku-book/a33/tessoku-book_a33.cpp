#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    // 全部XORした値(ニム和)を求める
    // ニム和=0のとき、後手必勝(Second)
    int XOR_sum = a[0];
    for (int i = 1; i < n; i++) XOR_sum = (XOR_sum ^ a[i]);

    if (XOR_sum != 0) cout << "First" << endl;
    else cout << "Second" << endl;

    return 0;
}
