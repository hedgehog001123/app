#include <bits/stdc++.h>
using namespace std;

bool isPrime (int x) {
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    int q;
    cin >> q;
    vector<int> x(q);
    for (int i = 0; i < q; i++) cin >> x[i];

    // 解1:1~√nまでループ
    for (int i = 0; i < q; i++) {
        if (isPrime(x[i])) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    // // 別解:エラトステネスのふるい O(NloglogN)
    // int n = 300000;
    // bool Deleted[300009]; // 整数xが消されている場合Deleted[x] = true
    // for (int i = 2; i <= n; i++) Deleted[i] = false;
    // for (int i = 2; i * i <= n; i++) {
    //     if (Deleted[i] == true) continue;
    //     for (int j = i * 2; i <= n; j+= i) Deleted[j] = true;
    // }

    // for (int i = 1; i <= q; i++) {
    //     if (Deleted[x[i]] == false) cout << "Yes" << endl;
    //     else cout << "No" << endl;
    // }

    return 0;
}

