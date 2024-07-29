#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    vector<int> ans;
    for (int i = 0; i < n-1; i++) {
        ans.push_back(a[i]);
        if (a[i] < a[i+1]) {
            int m = a[i+1] - a[i];
            for (int j = 0; j < m-1; j++) {
                ans.push_back(a[i]+j+1);
            }
        }
        else {
            int m = a[i] - a[i+1];
            for (int j = 0; j < m-1; j++) {
                ans.push_back(a[i]-j-1);
            }
        }
    }
    ans.push_back(a[n-1]);

    for (int i = 0; i < (int)ans.size(); i++) {
        cout << ans[i];
        if (i != (int)ans.size()-1) cout << " ";
    }
    cout << endl;


    return 0;
}
