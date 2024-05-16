#include <bits/stdc++.h>
using namespace std;

long long n;
vector<long long> a;

long long solve(int x);

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }

    cout << min(solve(0), solve(1)) << endl;

    return 0;
}

long long solve(int x){
    long long ans = 0, now = 0;
    for(long long i = 0; i < n; i++) {
        now += a[i];
        if((i % 2 ^ x) && (now >= 0)){
            ans += now + 1;
            now = -1;
        }
        if(!(i % 2 ^ x) && (now <= 0)){
            ans -= now - 1;
            now = 1;
        }
    }
    return ans;
}
