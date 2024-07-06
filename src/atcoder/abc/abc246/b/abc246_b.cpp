#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;

    printf("%.12f %.12f\n", a/sqrt(a*a+b*b), b/sqrt(a*a+b*b));

    return 0;
}
