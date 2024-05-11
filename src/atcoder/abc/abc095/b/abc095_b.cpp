#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    vector<int> m(n);
    int mi = 100001;
    for (int i = 0; i < n; i++) {
        cin >> m[i];
        x -= m[i];
        if ( mi > m[i] ) mi = m[i];
    }

    cout << n + x / mi << endl;

    return 0;
}
