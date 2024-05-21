#include <bits/stdc++.h>
using namespace std;

// 解説AC

vector<long long> Enumerate(vector<long long> A) {
	vector<long long> SumList;
	for (int i = 0; i < (1 << A.size()); i++) {
		long long sum = 0; // 現在の合計値
		for (int j = 0; j < A.size(); j++) {
			int wari = (1 << j);
			if ((i / wari) % 2 == 1) sum += A[j];
		}
		SumList.push_back(sum);
	}
	return SumList;
}

long long n, k;
long long a[32];

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];

    vector<long long> L1, L2;
    for (int i = 1; i <= n / 2; i++) L1.push_back(a[i]);
    for (int i = n / 2 + 1; i <= n; i++) L2.push_back(a[i]);

    vector<long long> sum1 = Enumerate(L1);
    vector<long long> sum2 = Enumerate(L2);
    sort(sum1.begin(), sum1.end());
    sort(sum2.begin(), sum2.end());

	for (int i = 0; i < sum1.size(); i++) {
		int pos = lower_bound(sum2.begin(), sum2.end(), k - sum1[i]) - sum2.begin();
		if (pos < sum2.size() && sum2[pos] == k - sum1[i]) {
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
	return 0;
}
