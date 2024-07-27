#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    multiset<int> st;
    for (int i = 0; i < q; i++) {
        int a;
        cin >> a;
        if (a == 1) {
            int x;
            cin >> x;
            st.insert(x);
        }
        if (a == 2) {
            int x, c;
            cin >> x >> c;
            while (c > 0 && st.find(x) != st.end()) {
                c--;
                st.erase(st.find(x));
            }
        }
        if (a == 3) {
            cout << *st.rbegin() - *st.begin() << endl;
        }
    }

    return 0;
}
