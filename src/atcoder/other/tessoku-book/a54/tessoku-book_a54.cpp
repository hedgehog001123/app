#include <bits/stdc++.h>
using namespace std;

int Q;
int Query[101010];
string S[101010];

int main() {
    cin >> Q;

    map<string, int> Seiseki;

    for (int i = 1; i <= Q; i++) {
        cin >> Query[i];
        if (Query[i] == 1) {
            cin >> S[i];
            int a;
            cin >> a;
            Seiseki[S[i]] = a;
        }
        if (Query[i] == 2) {
            cin >> S[i];
            cout << Seiseki[S[i]] << endl;
        }
    }

    return 0;
}
