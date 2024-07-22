#include <bits/stdc++.h>
using namespace std;

// a < c^b

int main() {
    long long a, b, c, d = 1;
    cin >> a >> b >> c;
    for (int i = 0; i < b; i++) d *= c;

    if (a < d) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
