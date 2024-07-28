#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> x(5 * n);
    for (int i = 0; i < 5 * n; i++) cin >> x[i];
    sort(x.begin(), x.end());

    int sum = 0;
    for (int i = n; i < 4 * n; i++) {
        sum += x[i];
    }

    printf("%.15f\n", (double)sum/(3*n));

    return 0;
}
