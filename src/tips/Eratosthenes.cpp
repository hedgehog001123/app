#include <iostream>
#include <vector>
using namespace std;

vector<bool> Eratosthenes(int N) {
    vector<bool> isprime(N+1, true);

    isprime[0] = isprime[1] = false;
    for (int p = 2; p <= N; ++p) {
        if (!isprime[p]) continue;
        for (int q = p * 2; q <= N; q += p) {
            isprime[q] = false;
        }
    }

    return isprime;
}

int MAX = 50;
vector<bool> isprime = Eratosthenes(MAX);

int main() {
    for (int i = 1; i <= MAX; i++) {
        if (isprime[i]) cout << i << endl;
    }
}
