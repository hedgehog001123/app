#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack<int> sta;
    int n = s.size();

    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            sta.push(i);
        }
        else if (s[i] == ')') {
            cout << sta.top() + 1 << " " << i + 1 << endl;
            sta.pop();
        }
    }

    return 0;
}
