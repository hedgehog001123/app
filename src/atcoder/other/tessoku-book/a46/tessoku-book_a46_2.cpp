#include <bits/stdc++.h>
using namespace std;

int n;
int x[155], y[155];
int p[155]; // 都市を訪れる順番
bool visited[155];

int RandInt(int a, int b) {
	return a + rand() % (b - a + 1);
}

double GetDistance(int p, int q) {
    return sqrt((x[p]-x[q]) * (x[p]-x[q]) + (y[p] - y[q]) * (y[p] - y[q]));
}

double GetScore() {
	double sum = 0;
	for (int i = 1; i <= n; i++) sum += GetDistance(p[i], p[i+1]);
	return sum;
}

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> x[i] >> y[i];

	p[1] = 1;
	p[n + 1] = 1;
	for (int i = 2; i <= n; i++) p[i] = i;

	// 山登り法
	double CurrentScore = GetScore();
	for (int t = 1; t <= 200000; t++) {
		int l = RandInt(2, n);
		int r = RandInt(2, n);
		if (l > r) swap(l, r);

		reverse(p + l, p + r + 1);
		double NewScore = GetScore();

		if (CurrentScore >= NewScore) CurrentScore = NewScore;
		else reverse(p + l, p + r + 1);
	}

	for (int i = 1; i <= n + 1; i++) cout << p[i] << endl;

	return 0;
}
