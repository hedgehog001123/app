#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> a;
    long long tmp = 1;
    while (n > 0) {
        if (n % 2 == 1) a.push_back(tmp);
        n /= 2;
        tmp *= 2;
    }

    // for (int i = 0; i < (int)a.size(); i++) {
    //     cout << a[i] << endl;
    // }

    int m = (int)a.size();
    for (int i = 0; i < (1 << m); i++) {
        int s = i;
        long long ret = 0;
        int b = 0;
        while (s > 0) {
            if (s % 2 == 1) ret += a[b];
            s /= 2;
            b++;
        }
        cout << ret << endl;
    }

    return 0;
}
