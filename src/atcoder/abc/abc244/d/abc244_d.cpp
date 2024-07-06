#include <bits/stdc++.h>
using namespace std;

// RGB RBG GRB GBR BRG BGR

// RGB :: GBR :: BRG == 012::120::210
// RBG :: GRB :: BGR == 021::102::201

int main() {
    vector<int> a(3), b(3);
    for (int i = 0; i < 3; i++) {
        char s;
        cin >> s;
        if (s == 'R') a[i] = 0;
        if (s == 'G') a[i] = 1;
        if (s == 'B') a[i] = 2;
    }
    for (int i = 0; i < 3; i++) {
        char t;
        cin >> t;
        if (t == 'R') b[i] = 0;
        if (t == 'G') b[i] = 1;
        if (t == 'B') b[i] = 2;
    }
    if ((3+a[1]-a[0]) % 3 == (3+b[1]-b[0]) % 3) cout << "Yes" << endl;
    else cout << "No" << endl;



    return 0;
}
