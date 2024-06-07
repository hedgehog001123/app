#include <bits/stdc++.h>
using namespace std;

long long N;
long long A[101010];

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> A[i];

    map<long long, long long> Map;
    long long Answer = 0;

    for (int i = 1; i <= N; i++) {
        Answer += Map[A[i]];
        Map[A[i]]++;
    }

    cout << Answer << endl;

    return 0;
}
