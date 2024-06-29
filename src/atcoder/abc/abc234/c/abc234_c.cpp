#include <bits/stdc++.h>
using namespace std;

// 2, 20, 22, 200, 202, 220, 222, 2000,...

int main() {
    long long k;
    cin >> k;
    long long tmp = k;
    vector<int> a;
    while (tmp > 0) {
        if (tmp % 2 == 1) a.push_back(2);
        else a.push_back(0);
        tmp /= 2;
    }
    reverse(a.begin(), a.end());

    int n = (int)a.size();
    for (int i = 0; i < n; i++) cout << a[i];
    cout << endl;

    return 0;
}
