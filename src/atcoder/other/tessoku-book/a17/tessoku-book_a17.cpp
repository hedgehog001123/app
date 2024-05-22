#include <bits/stdc++.h>
using namespace std;

int n;
int a[100010], b[100010];
int dp[100010];
vector<int> Answer;

int main() {
    cin >> n;
    for (int i = 2; i <= n; i++) cin >> a[i];
    for (int i = 3; i <= n; i++) cin >> b[i];

    dp[1] = 0;
    dp[2] = a[2];

    for (int i = 3; i <= n; i++) {
        dp[i] = min(dp[i-1]+a[i], dp[i-2]+b[i]);
    }

    // 答えの復元
    int Place = n; // 現在位置
    
    while(true) {
        Answer.push_back(Place);
        if (Place == 1) break;

        if (dp[Place-1] + a[Place] == dp[Place]) Place--;
        else Place -= 2;
    }

    reverse(Answer.begin(), Answer.end());

    cout << Answer.size() << endl;
    for (int i = 0; i < Answer.size(); i++) {
        if (i >= 1) cout << " ";
        cout << Answer[i];
    }

    cout << endl;

    return 0;
}
