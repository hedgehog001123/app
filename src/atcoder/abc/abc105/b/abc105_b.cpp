#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    bool f = false;
    for(int i = 0; i <= 25; i++) {
        for(int j = 0; j <= 14; j++) {
            if( i * 4 + j * 7 == n) f = true;
        }
    }
    
    if (f) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
