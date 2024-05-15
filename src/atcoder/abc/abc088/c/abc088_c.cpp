#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> c(9);
    for (int i = 0; i < 9; i++) cin >> c[i];
    bool ok = false;
    if(c[6]-c[3]==c[7]-c[4] and c[7]-c[4]==c[8]-c[5] and c[3]-c[0]==c[4]-c[1] and c[4]-c[1]==c[5]-c[2] and c[2]-c[1]==c[5]-c[4] and c[5]-c[4]==c[8]-c[7] and c[1]-c[0]==c[4]-c[3] and c[4]-c[3]==c[7]-c[6])ok = true;

    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
