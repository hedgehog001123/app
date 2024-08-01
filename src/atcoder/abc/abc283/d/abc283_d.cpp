#include <bits/stdc++.h>
using namespace std;

int alphabet[30];

int main() {
    string s;
    cin >> s;
    int n = (int)s.size();
    for (int i = 0; i <= 26; i++) alphabet[i] = 0;

    string t = "";
    for (int i = 0; i < n; i++) {
        t += s[i];

        if ('a' <= s[i] && s[i] <= 'z') {
            alphabet[s[i]-'a']++;
            if (alphabet[s[i]-'a'] >= 2) {
                cout << "No" << endl;
                return 0;
            }
        }
        else if (s[i] == ')') {
            while (true) {
                t.pop_back();
                char end = t[t.size()-1];
                if (end == '(') {
                    t.pop_back();
                    break;
                }
                else if (end == ')') cout << "find )" << endl;
                else {
                    alphabet[end-'a']--;
                }
            }
        }
    }

    cout << "Yes" << endl;



    return 0;
}
