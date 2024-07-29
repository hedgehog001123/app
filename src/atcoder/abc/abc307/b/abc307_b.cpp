#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            string mrg = s[i]+s[j];
            int m = (int)mrg.size();
            bool kaibun = true;
            for (int i = 0; i < m/2; i++) {
                if (mrg[i] != mrg[m-1-i]) kaibun = false;
            }
            if (kaibun) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;

    return 0;
}
