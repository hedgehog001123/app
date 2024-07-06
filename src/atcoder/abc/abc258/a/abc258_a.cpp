#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;
    int h = 21, m = 0;
    h += k / 60;
    m += k % 60;
    printf("%d:%02d\n", h, m);

    return 0;
}
