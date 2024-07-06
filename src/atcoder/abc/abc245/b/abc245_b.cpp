#include <bits/stdc++.h>
using namespace std;

bool existed[2005];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        existed[a] = true;
    }
    for (int i = 0; i <= 2000; i++) {
        if (existed[i] == false) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
