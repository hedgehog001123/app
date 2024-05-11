#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int a = -1, b = -1;
    for (int i = 0; i < s.size(); i++) {
        if ( s[i] == 'A' && a == -1) {
            a = i;
        }
        if ( s[i] == 'Z') {
            b = i;
        }
    }

    cout << b - a + 1 << endl;

    return 0;
}
