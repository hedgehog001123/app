#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int mi = min(a, b), ma = max(a, b);

    if (ma / 2 == mi) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
