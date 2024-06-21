#include <bits/stdc++.h>
using namespace std;

int main() {
    double X, tmp;
    cin >> X;
    tmp = X - (int)X;
    int Answer = (int)X;
    if (tmp >= 0.5000) Answer++;
    cout << Answer << endl;

    return 0;
}
