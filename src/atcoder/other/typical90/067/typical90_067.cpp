#include <bits/stdc++.h>
using namespace std;

string sousa(string n) {
    long long b = 0;
    long long tmp = 1;
    for (int i = n.size()-1; i >= 0; i--) {
        b += (n[i] - '0') * tmp;
        tmp *= 8;
    }
    // cout << b << endl;

    vector<int> c(19);
    long long idx = 0;
    for (int i = 0; i < 19; i++) {
        if (b % 9 != 0) idx = i;

        if (b % 9 == 8) c[i] = 5;
        else c[i] = b % 9;
        b /= 9;
    }

    string d = "";
    for (int i = idx; i >= 0; i--) {
        d += to_string(c[i]);
    }

    return d;
}

int main() {
    string n;
    long long k;
    cin >> n >> k;

    for (int i = 0; i < k; i++) n = sousa(n);
    cout << n << endl;

    return 0;
}
