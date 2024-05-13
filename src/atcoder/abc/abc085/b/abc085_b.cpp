#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> d(n);
    for(int i = 0; i < n; i++) cin >> d[i];
    vector<int> unique_d;

    sort(d.begin(), d.end());

    auto last = unique(d.begin(), d.end());
    unique_d.assign(d.begin(), last);

    // for(int num: unique_d) {
    //     cout << num << " ";
    // }

    cout << unique_d.size() << endl;

    return 0;
}
