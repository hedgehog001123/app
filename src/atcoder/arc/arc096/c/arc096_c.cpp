#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    if(x < y) {
        cout << min(min(a * x + b * y, x * 2 * c + abs(y - x) * b),max(x, y) * 2 * c) << endl;
    } else if (x == y) {
        cout << min(a * x + b * y, x * 2 * c) << endl;
    } else {
        cout << min(min(a * x + b * y, y * 2 * c + abs(y - x) * a),max(x, y) * 2 * c) << endl;
    }

    return 0;
    
    
}
