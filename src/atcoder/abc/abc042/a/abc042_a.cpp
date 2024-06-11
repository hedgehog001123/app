#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if (min({a, b, c}) == 5 && max({a, b, c}) == 7 && a + b + c == 17) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
