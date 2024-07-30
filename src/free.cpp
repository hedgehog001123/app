#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;cin >> s;cout << s << endl;
    for (int i = 0; i < 20; i++) cout << "-" ;
    cout << endl;

    vector<int> a = {1, 3, 4, 4, 6};
    printf("vector<int> a = {1, 3, 4, 4, 6};\n");
    for (int i = 0; i <= 7; i++) printf("i = %dのとき、{lower_bound, upper_bound, binary_search} = {%ld, %ld, %d}\n", i, lower_bound(a.begin(), a.end(), i)-a.begin(), upper_bound(a.begin(), a.end(), i)-a.begin(), binary_search(a.begin(), a.end(), i));

    int n;cin >> n;vector<int> b(n);
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) {
        cout << b[i];
        if (i != n-1) cout << " ";
    }
    cout << endl;

    return 0;
}
