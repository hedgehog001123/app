#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    if (a == b) {
        cout << "1.000" << endl;
        return 0;
    }

    printf("%.3f\n", b/a);

    return 0;
}
