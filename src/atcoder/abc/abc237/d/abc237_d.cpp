#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    
    deque<int> ans;
    ans.push_back(n);

    for (int i = n-1; i >= 0; i--) {
        if (s[i] == 'R') {
            ans.push_front(i);
        }
        else {
            ans.push_back(i);
        }
    }

    for (auto a: ans) {
        cout << a << " ";
    }
    cout << endl;
    
    return 0;
}
