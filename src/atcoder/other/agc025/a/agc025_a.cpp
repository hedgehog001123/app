#include <bits/stdc++.h>
using namespace std;

int calculate_each_number(int a) {
    int ret = 0;
    while(a) {
        ret += a % 10;
        a /= 10;
    }
    return ret;
}

int main(){
    int n;
    cin >> n;
    int mi = 99999999;
    for (int i = 1; i <= n - 1; i++) {
        int a = i, b = n - i;
        mi = min(mi, calculate_each_number(a) + calculate_each_number(b));
    }

    cout << mi << endl;

    return 0;
}
