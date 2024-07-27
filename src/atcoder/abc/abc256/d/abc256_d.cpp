#include <bits/stdc++.h>
using namespace std;

int a[201010];
int s[201010];

int main() {
    int n;
    cin >> n;
    vector<int> l(n), r(n);
    for (int i = 0; i < n; i++) cin >> l[i] >> r[i];

    for (int i = 0; i < n; i++) {
        a[l[i]]++;
        a[r[i]]--;
    }
    for (int i = 0; i < 200010; i++) s[i] = 0;
    for (int i = 0; i < 200010; i++) {
        s[i+1] = s[i] + a[i+1];
    }

    bool ok = false;
    vector<int> x, y;
    for (int i = 0; i < 200010; i++) {
        if (ok == false && s[i] > 0) {
            ok = true;
            x.push_back(i);
        }
        else if (ok == true && s[i] == 0) {
            ok = false;
            y.push_back(i);
        }
    }

    for (int i = 0; i < x.size(); i++) {
        cout << x[i] << " " << y[i] << endl;
    }





    return 0;
}
