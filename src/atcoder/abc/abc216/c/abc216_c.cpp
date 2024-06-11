#include <bits/stdc++.h>
using namespace std;

// 1->Nにする
// N->1にする
// dp?bit?

int main() {
    long long N;
    cin >> N;
    vector<char> reverse_answer;
    
    long long cnt = 0;
    while (N != 0) {
        if (N % 2 == 0) {
            N /= 2;
            reverse_answer.push_back('B');
        }
        else {
            N -= 1;
            reverse_answer.push_back('A');
        }
    }

    for (int i = reverse_answer.size()-1; i >= 0;i--) cout << reverse_answer[i];
    cout << endl;

    return 0;
}
