#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int> even, odd;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) even.push_back(a[i]);
        else odd.push_back(a[i]);
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    reverse(even.begin(), even.end());
    reverse(odd.begin(), odd.end());
    
    int tmp = -1, tmp2 = -1;
    if (even.size() >= 2) tmp = even[0] + even[1];
    if (odd.size() >= 2) tmp2 = odd[0] + odd[1];

    cout << max(tmp, tmp2) << endl;

    return 0;
}
