#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;cin >> S;cout << S << endl;
    
    cout << "--------------------" << endl;
    vector<int> a = {1, 3, 4, 4, 6};
    printf("vector<int> a = {1, 3, 4, 4, 6};\n");
    for (int i = 0; i <= 7; i++) printf("i = %dのとき、{lower_bound, upper_bound, binary_search} = {%ld, %ld, %d}\n", i, lower_bound(a.begin(), a.end(), i)-a.begin(), upper_bound(a.begin(), a.end(), i)-a.begin(), binary_search(a.begin(), a.end(), i));
    cout << "lower_boundは、`i以上である最初の要素のイテレータ`を返す" << endl;
    cout << "upper_boundは、`iよりも大きい最初の要素のイテレータ`を返す" << endl;
    cout << "ただし、存在しない場合は、lastを返すので注意" << endl;

    cout << "--------------------" << endl;
    set<int> s;
    for (int i = 1; i <= 5; i++) s.insert(i);
    s.erase(2);
    s.erase(*s.end());
    cout << "set<int> s = ";
    for (auto a: s) cout << a << ", ";
    cout << endl;
    cout << "sの最小値は, *s.begin() = " << *s.begin() << ", 最大値は, *s.rbegin() = " << *s.rbegin() << endl;
    cout << "初めてx以上である最小の要素を指すイテレーター => s.lower_bound(x)" << endl;

    cout << "--------------------" << endl;
    int n;cin >> n;vector<int> b(n);
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) {
        cout << b[i];
        if (i != n-1) cout << " ";
    }
    cout << endl;

    cout << "--------------------" << endl;
    map<int, bool> m;
    m[0] = true;
    cout << m[9] << endl;

    return 0;
}
