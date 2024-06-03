#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    vector<pair<int, int>> Answer;
    while (x >= 2 || y >= 2) {
        Answer.push_back(make_pair(x, y));
        if (x > y) x -= y;
        else y -=x;
    }
    reverse(Answer.begin(), Answer.end());

    cout << Answer.size() << endl;
    for (int i = 0; i < Answer.size(); i++) {
        cout << Answer[i].first << " " << Answer[i].second << endl;
    }

    return 0;
}
