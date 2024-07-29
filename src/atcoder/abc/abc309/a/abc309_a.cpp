#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    if (b-a == 1 && (b-1) / 3 == (a-1) / 3) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
