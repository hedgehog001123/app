#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[m];
    for (int i = 0; i < m; i++) {
        if (i < n) a[i] = 0;
        else a[i] = 1;
    }
    
    do {
        for (int i = 0; i < m; i++) {
            if (a[i] == 0) cout << i+1;
            if (i != m-1) cout << " ";
        }
        cout << endl;
    } while (next_permutation(a, a + m));

    return 0;
}
