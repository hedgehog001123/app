#include <bits/stdc++.h>
using namespace std;

int H, W, N;

bool compare_by_second(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
}

int main() {
    cin >> H >> W >> N;
    vector<pair<int, int>> Ai, Bi;
    for (int i = 0; i < N; i++) {
        int a, b;cin >> a >> b;
        Ai.push_back(make_pair(a, i));
        Bi.push_back(make_pair(b, i));
    }
    sort(Ai.begin(), Ai.end());
    sort(Bi.begin(), Bi.end());

    vector<pair<int, int>> NewAi, NewBi;

    int CurrentIndex_A = 0, PrevNum_A = -1;
    for (int i = 0; i < N; i++) {
        if (PrevNum_A != Ai[i].first) CurrentIndex_A++;
        NewAi.push_back(make_pair(Ai[i].second, CurrentIndex_A));
        PrevNum_A = Ai[i].first;
    }

    int CurrentIndex_B = 0, PrevNum_B = -1;
    for (int i = 0; i < N; i++) {
        if (PrevNum_B != Bi[i].first) CurrentIndex_B++;
        NewBi.push_back(make_pair(Bi[i].second, CurrentIndex_B));
        PrevNum_B = Bi[i].first;
    }
    sort(NewAi.begin(), NewAi.end());
    sort(NewBi.begin(), NewBi.end());

    for (int i = 0; i < N; i++) {
        cout << NewAi[i].second << " " << NewBi[i].second << endl;
    }


    return 0;
}
