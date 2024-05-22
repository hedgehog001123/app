#include <bits/stdc++.h>
using namespace std;

int h[100010];
int dp[100010];
vector<int> Answer;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> h[i];

    dp[1] = 0;
    dp[2] = abs(h[1] - h[2]);

    for (int i = 3; i <= n; i++) {
        dp[i] = min(dp[i-1] + abs(h[i-1]-h[i]) ,dp[i-2] + abs(h[i-2]-h[i]));
    }

    int Place = n;
    
    while(true) {
        Answer.push_back(Place);
        if (Place == 1) break;

        if (dp[Place] == dp[Place-1] + abs(h[Place-1]-h[Place])) Place--;
        else Place -= 2;
    }

    int k = Answer.size();

    reverse(Answer.begin(), Answer.end());
    cout << k << endl;
    for (int i = 0; i < k; i++) {
        if (i > 0) cout << " ";
        cout << Answer[i];
    }
    cout << endl;

    return 0;
}
