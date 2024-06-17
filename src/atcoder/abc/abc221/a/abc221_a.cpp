#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int Ans = 1;
    while (A-B) {
        Ans *= 32;
        A--;
    }
    cout << Ans << endl;

    return 0;
}
