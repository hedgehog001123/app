#include <bits/stdc++.h>
using namespace std;

int Q;
int a[201010], x[201010];

int main() {
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        cin >> a[i];
        if (a[i] == 1) cin >> x[i];
    }
    queue<int> que1;
    priority_queue<int, vector<int>, greater<int>> que2;
    
    for (int i = 0; i < Q; i++) {
        if (a[i] == 1) {
            que1.push(x[i]);
        }
        if (a[i] == 2) {
            if(que2.empty()) {
                cout << que1.front() << endl;
                que1.pop();
            } else {
                cout << que2.top() << endl;
                que2.pop();
            }
        }
        if (a[i] == 3) {
            while (!que1.empty()) {
                que2.push(que1.front());
                que1.pop();
            }
        }
    }

    return 0;
}
