#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int a, b, c;
    cin >> n;
    c = n % 10;
    n /= 10;
    b = n % 10;
    n /= 10;
    a = n;
    
    cout << 111 * (a + b + c) << endl;

    return 0;
}
