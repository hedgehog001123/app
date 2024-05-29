#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    if (2 * (n-1) <= k && k % 2 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
