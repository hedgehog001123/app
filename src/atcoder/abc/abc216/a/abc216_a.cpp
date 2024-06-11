#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    scanf("%d.%d", &X, &Y);
    if (0 <= Y && Y <= 2) cout << X << "-" << endl;
    if (3 <= Y && Y <= 6) cout << X << endl;
    if (7 <= Y && Y <= 9) cout << X << "+" << endl;

    return 0;
}
