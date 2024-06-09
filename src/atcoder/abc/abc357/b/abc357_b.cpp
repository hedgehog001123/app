#include <bits/stdc++.h>
using namespace std;

char toUpper(char c) {
    return ('a' <= c && c <= 'z') ? ('A' + c - 'a') : c;
}

char toLower(char c) {
    return ('A' <= c && c <= 'Z') ? ('a' + c - 'A') : c;
}

int main() {
    string s;
    cin >> s;
    int a = 0, A = 0;
    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        if ('a' <= c && c <= 'z') a++;
        else A++;
    }

    if (a < A) {
        // 小文字を大文字にする
        for (int i = 0; i < s.size(); i++) {
            if ('a' <= s[i] && s[i] <= 'z') cout << toUpper(s[i]);
            else cout << s[i];
        }
    }
    else {
        // 大文字を小文字に
        for (int i = 0; i < s.size(); i++) {
            if ('A' <= s[i] && s[i] <= 'Z') cout << toLower(s[i]);
            else cout << s[i];
        }
    }
    cout << endl;

    return 0;
}
