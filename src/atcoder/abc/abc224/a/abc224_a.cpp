#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int N = (int)S.size();
    if (S[N-2]=='e' && S[N-1]=='r') cout << "er" << endl;
    else cout << "ist" << endl;

    return 0;
}
