#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    string s;
    cin >> s;
    queue<int> q;
    q.push(x-1);
    s[x-1] = '@';

    while(!q.empty()) {
        int pos = q.front();
        q.pop();
        if (pos - 1 >= 0 && s[pos - 1] == '.') {
            s[pos - 1] = '@';
            q.push(pos - 1);
        }
        if (pos + 1 <= n - 1 && s[pos + 1] == '.') {
            s[pos + 1] = '@';
            q.push(pos + 1);
        }
    }

    cout << s << endl;

    return 0;
}
