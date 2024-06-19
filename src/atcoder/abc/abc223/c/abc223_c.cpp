#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<double> A(N), B(N);
    for (int i = 0; i < N; i++) cin >> A[i] >> B[i];

    double T = 0;
    for (int i = 0; i < N; i++) {
        T += A[i] / B[i];
    }
    double t = 0, Answer = 0;
    int tmp;
    for (int i = 0; i < N; i++) {
        t += A[i] / B[i];
        Answer += A[i];
        if (t * 2 > T) {
            tmp = i;
            break;
        }
    }
    t -= A[tmp] / B[tmp];
    Answer -= A[tmp];
    Answer += (T/2-t)*B[tmp];

    printf("%.12f\n", Answer);
    
    return 0;
}
