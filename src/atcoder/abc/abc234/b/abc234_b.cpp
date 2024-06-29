#include <bits/stdc++.h>
using namespace std;

int d2(int x1, int y1, int x2, int y2) {
    return (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
}

int main() {
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++) cin >> x[i] >> y[i];
    int maximum = -1;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            int tmp = d2(x[i], y[i], x[j], y[j]);
            if (tmp > maximum) {
                maximum = tmp;
            }
        }
    }

    printf("%.10f\n", sqrt(maximum));

    return 0;
}
