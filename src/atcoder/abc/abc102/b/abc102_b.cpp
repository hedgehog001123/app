#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int mi = 1111000000, ma = 0;

    for (int i = 0; i < n; i++) {
        if( mi > a[i] ) mi = a[i];
        if( ma < a[i] ) ma = a[i];
    }

    cout << ma - mi << endl;


    return 0;
}
