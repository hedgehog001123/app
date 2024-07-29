#include <bits/stdc++.h>
using namespace std;

int main() {
    char p, q;
    cin >> p >> q;
    int a = p - 'A', b = q - 'A';

    vector<int> sum = {0, 3, 4, 8, 9, 14, 23};

    cout << abs(sum[b] - sum[a]) << endl;

    return 0;
}
