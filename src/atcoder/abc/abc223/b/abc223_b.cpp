#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int N = (int)S.size();
    vector<string> T(N);
    
    for (int i = 0; i < N; i++) {
        string tmp = "";
        for (int j = i; j < N; j++) {
            tmp += S[j];
        }
        for (int j = 0; j < i; j++) {
            tmp += S[j];
        }
        T[i] = tmp;
    }
    sort(T.begin(), T.end());

    cout << T[0] << endl;
    cout << T[N-1] << endl;

    // for (int i = 0; i < N; i++) cout << T[i] << endl;

    return 0;
}
