#include <bits/stdc++.h>
using namespace std;

int main() {
    // 0->初期位置, x->ゴール, y->壁, z->ハンマー
    int x, y, z;
    cin >> x >> y >> z;

    if(y<0){
		x *= -1;
		y *= -1;
		z *= -1;
	}

    if (x < y) cout << abs(x) << endl;
    else {
        if (y < z) cout << -1 << endl;
        else cout << abs(z) + abs(z-x); 
    }

    return 0;
}
