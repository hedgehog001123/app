#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int ans = 10000;
    
    for (int i = 0; i < n; i++) {
        int j = 0;
        while( a[i] % 2 == 0 ){
            j++;
            a[i] /= 2;
        }
        if ( ans > j ) ans = j;
    }

    cout << ans << endl;

    return 0;
}
