#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end(), greater<int>());

    int sumA = 0, sumB = 0;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) sumA += a[i];
        else sumB += a[i];
    }

    cout << sumA - sumB << endl;

    return 0;
}
