#include <bits/stdc++.h>
using namespace std;

bool isok(int x) {
    bool tmp = false;
    if(x == 1 or x == 2 or x == 4 or x == 5 or x == 10 or x == 20 or x == 25 or x == 50 or x == 100) tmp = true;

    return tmp;
}

int main() {
    int a, b;
    cin >> a >> b;
    
    for(int i = a; i <= b; i++) {
        if(isok(i)){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" <<endl;

    return 0;
}
