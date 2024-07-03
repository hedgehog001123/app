#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (abs(y2-y1) >= 5 || abs(x2-x1) >= 5) {
        cout << "No" << endl;
        return 0;
    }
    
    bool ok = false;
    for (int i = min(x1, x2)-5; i <= max(x1, x2)+5; i++) {
        for (int j = min(y1, y2)-5; j <= max(y1, y2)+5; j++) {
            if ((i-x1)*(i-x1)+(j-y1)*(j-y1)==5 && (i-x2)*(i-x2)+(j-y2)*(j-y2)==5) ok = true;
        }
    }
    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
