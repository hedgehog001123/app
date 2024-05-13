#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    int a[26] = {0};
    for(int i = 0; i < n; i++) {
        a[s[i]-'a']++;
    }
    for(int i = 0; i < 26; i++) {
        if(a[i] == 0){
            printf("%c", 'a' + i);
            break;
        }
        if(i == 25) cout << "None" << endl;
    }

    return 0;
}
