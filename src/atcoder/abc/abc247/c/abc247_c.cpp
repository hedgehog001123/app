#include <bits/stdc++.h>
using namespace std;

int s[20][90000];

int main() {
    int n;
    cin >> n;

    s[1][0] = 1;
    for (int i = 2; i <= n; i++) {
        int idx = 0;
        for (int j = 0; j < (int)pow(2, i-1) - 1; j++) {
            s[i][idx] = s[i-1][j];
            idx++;
        }
        s[i][idx] = i;
        idx++;
        for (int j = 0; j < (int)pow(2, i-1) - 1; j++) {
            s[i][idx] = s[i-1][j];
            idx++;
        }
    }

    for (int i = 0; i < (int)pow(2, n) - 1; i++) {
        cout << s[n][i];
        if (i != (int)pow(2, n) - 2) cout << " ";
    }
    cout << endl;
    
    return 0;
}