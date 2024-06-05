#include <bits/stdc++.h>
using namespace std;

int n;
int x[155], y[155];
int p[155]; // 都市を訪れる順番
bool visited[155];

double GetDistance(int p, int q) {
    return sqrt((x[p]-x[q]) * (x[p]-x[q]) + (y[p] - y[q]) * (y[p] - y[q]));
}

void PlayGreedy() {
    int CurrentPlace = 1;
    for (int i = 1; i <= n; i++) visited[i] = false;
    p[1] = 1;
    visited[1] = true;

    for (int i = 2; i <= n; i++) {
        double MinDist = 10000.0;
        int Min_ID = -1;

        for (int j = 1; j <= n; j++) {
            if (visited[j] == true) continue;
            double NewDist = GetDistance(CurrentPlace, j);
            if (MinDist > NewDist) {
                MinDist = NewDist;
                Min_ID = j;
            }
        }

        visited[Min_ID] = true;
        p[i] = Min_ID;
        CurrentPlace = Min_ID;
    }

    p[n+1] = 1;

    return;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> x[i] >> y[i];

    PlayGreedy();

    for (int i = 1; i <= n + 1; i++) cout << p[i] << endl;

    return 0;
}
