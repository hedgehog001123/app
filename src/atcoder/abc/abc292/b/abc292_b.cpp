#include <bits/stdc++.h>
using namespace std;

int card[110];

int main() {
    int n, q;
    cin >> n >> q;
    for (int i = 0; i <= 100; i++) card[i] = 0;
    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        if (a == 1) card[b] += 1;
        if (a == 2) card[b] += 2;
        if (a == 3) {
            if (card[b] >= 2) cout << "Yes" << endl;
            else cout << "No" << endl;
        } 
    }

    return 0;
}
