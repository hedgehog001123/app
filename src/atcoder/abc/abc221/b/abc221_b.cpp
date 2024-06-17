#include <bits/stdc++.h>
using namespace std;

void swap(char &a, char &b) {
    char tmp;
    tmp = a;
    a = b;
    b = tmp;

    return;
}

int main() {
    string S, T;
    cin >> S >> T;
    int n = (int)S.size();
    bool ok = false;

    if (S == T) ok = true;
    for (int i = 0; i < n-1; i++) {
        string x = S;
        swap(x[i], x[i+1]);
        if (x == T) ok = true;
    }

    if (ok == true) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
