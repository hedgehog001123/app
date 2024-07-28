#include <bits/stdc++.h>
using namespace std;

bool called[201010];

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) {
        if (!called[i+1]) called[a[i]] = true;
    }

    vector<int> ans;
    for (int i = 1; i <= n; i++) {
        if (!called[i]) ans.push_back(i);
    }

    cout << (int)ans.size() << endl;
    for (int i = 0; i < (int)ans.size(); i++) {
        cout << ans[i];
        if (i != (int)ans.size()-1) cout << " ";
    }
    cout << endl;
    

    return 0;
}
