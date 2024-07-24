#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    long long sum = 0;
    for (int i = 0; i < n; i++) sum += a[i];

    if (sum % 10 != 0) {
        cout << "No" << endl;
        return 0;
    }
    long long b = sum / 10;

    int front = 0, back = 0;
    long long tmpsum = 0;
    int kaisu = 0;
    while (kaisu <= 200000) {
        kaisu++;
        tmpsum += a[back%n];
        back++;
        if (tmpsum == b) {
            cout << "Yes" << endl;
            return 0;
        }
        else if (tmpsum > b) {
            tmpsum -= a[front%n];
            front++;
        }
    }

    cout << "No" << endl;

    return 0;
}
