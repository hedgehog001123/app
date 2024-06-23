#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K, A;
    cin >> N >> K >> A;
    K--;
    if ((A + K) % N == 0) cout << N << endl;
    else cout << (A + K) % N << endl;

    return 0;
}
