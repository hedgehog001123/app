#include <bits/stdc++.h>
using namespace std;

// char a[110][110];
// char b[110][110];

int main() {
   int n;
   cin>>n;

   vector<string> a(n);
   for(int i=0;i<n;i++){
      cin>>a[i];
   }

   vector<vector<string>> b(n, vector<string>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j != 0) b[i][j] = a[i][j-1];
            else if (i != 0 && j == n-1) b[i][j] = a[i-1][j];
            else if (i == n-1 && j != n-1) b[i][j] = a[i][j+1];
            else if (i != n-1 && j == 0) b[i][j] = a[i+1][j];
            else b[i][j] = a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << b[i][j];
        }
        cout << endl;
    }



    return 0;
}
