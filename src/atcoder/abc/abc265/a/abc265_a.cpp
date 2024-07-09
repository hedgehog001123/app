#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, n;
    cin >> x >> y >> n;

    cout << min(n * x, (n / 3) * y + (n % 3) * x) << endl;

    return 0;
}
