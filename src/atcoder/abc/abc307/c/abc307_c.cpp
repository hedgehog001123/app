#include <bits/stdc++.h>
using namespace std;

int main() {
    int Ha, Wa, Hb, Wb, Hx, Wx;
    cin >> Ha >> Wa;
    vector<string> a(Ha);
    for (int i = 0; i < Ha; i++) cin >> a[i];
    cin >> Hb >> Wb;
    vector<string> b(Hb);
    for (int i = 0; i < Hb; i++) cin >> b[i];
    cin >> Hx >> Wx;
    vector<string> x(Hx);
    for (int i = 0; i < Hx; i++) cin >> x[i];

    int a_cnt = 0, b_cnt = 0;
    for (int i = 0; i < Ha; i++) for (int j = 0; j < Wa; j++) if (a[i][j]=='#') a_cnt++;
    for (int i = 0; i < Hb; i++) for (int j = 0; j < Wb; j++) if (b[i][j]=='#') b_cnt++;

    bool yes = false;
    // aの位置を二重ループ・bの位置を二重ループ→Xと等しいかで二重ループ
    for (int ai = 0; ai < 21; ai++) {
        for (int aj = 0; aj < 21; aj++) {
            for (int bi = 0; bi < 21; bi++) {
                for (int bj = 0; bj < 21; bj++) {
                    // Cを生成
                    vector<string> c(33);
                    for (int i = 0; i < 33; i++) c[i] = ".................................";
                    vector<vector<int>> cnt(33, vector<int>(33));
                    for (int i = 0; i < 33; i++) for (int j = 0; j < 33; j++) cnt[i][j] = 0;
                    
                    for (int i = 0; i < Ha; i++) {
                        for (int j = 0; j < Wa; j++) {
                            if (a[i][j]=='#') {
                                c[ai+i][aj+j] = '#';
                                cnt[ai+i][aj+j]++;
                            }
                        }
                    }
                    for (int i = 0; i < Hb; i++) {
                        for (int j = 0; j < Wb; j++) {
                            if (b[i][j]=='#') {
                                c[bi+i][bj+j] = '#';
                                cnt[bi+i][bj+j]++;
                            }
                        }
                    }

                    // Xと等しいか
                    bool ok = true;
                    int counter = 0;
                    for (int i = 10; i < 10+Hx; i++) {
                        for (int j = 10; j < 10+Wx; j++) {
                            if (c[i][j] == '#') counter += cnt[i][j];
                            if (c[i][j] != x[i-10][j-10]) ok = false;
                        }
                    }
                    if (ok && counter == a_cnt + b_cnt) yes = true;
                }
            }
        }
    }

    if (yes) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
