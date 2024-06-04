#include <bits/stdc++.h>
using namespace std;

int n;
long long a[101010], b[101010];
long long c[4][2] = {{1, 1}, {1, -1}, {-1, 1}, {-1, -1}};

long long solve (long long x, long long y) {   
    long long res = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] * x + b[i] * y >= 0) res += a[i] * x + b[i] * y;
    }

    return res;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i];

    long long Answer = 0;
    for (int i = 0; i < 4; i++) {
        Answer = max(Answer, solve(c[i][0], c[i][1]));
    } 

    cout << Answer << endl;

    return 0;
}
