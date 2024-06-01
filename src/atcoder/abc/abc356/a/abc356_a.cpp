#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int l, r;
    cin >> l >> r;

    for (int i = 1; i <= l - 1; i++) cout << i << " "; 
    for (int i = r; i >= l; i--) cout << i << " "; 
    for (int i = r + 1; i <= n; i++) cout << i << " "; 

    return 0;
}
