#include <bits/stdc++.h>
using namespace std;

int main() {
    long long Sx, Sy, Tx, Ty;
    cin >> Sx >> Sy >> Tx >> Ty;
    if ((Sx + Sy) % 2 == 1)Sx--;
    if ((Tx + Ty) % 2 == 1)Tx--;
    long long dx = Tx - Sx, dy = Ty - Sy;
    long long ans = 0;

    if (abs(dx) > abs(dy)) {
        ans = abs(dy) + (abs(dx)-abs(dy))/2; 
    }
    else {
        ans = abs(dy);
    }
    cout << ans << endl;

    return 0;
}
