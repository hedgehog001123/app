#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> h(n);
    int ans = -1;
    for (int i = 0; i < n; i++) {
        cin >> h[i];
        if(i >= 1 && h[0] < h[i]) {
            ans = i + 1;
            break;
        }
    }
    cout << ans << endl;

    return 0;
}
