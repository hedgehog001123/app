#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> S(3);
    for (int i = 0; i < 3; i++) cin >> S[i];
    string T;
    cin >> T;

    for (int i = 0; i < T.size(); i++) cout << S[T[i]-'1'];
    cout << endl;

    return 0;
}
