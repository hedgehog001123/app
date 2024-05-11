#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> x(n), y(n);
    for(int i = 0; i < n; i++){
        cin>>x[i]>>y[i];
    }

    int xsum = 0, ysum = 0;
    for(int i = 0; i< n; i++){
        xsum += x[i];
        ysum += y[i];
    }

    if(xsum > ysum){
        cout<<"Takahashi"<<endl;
    } else if(xsum == ysum) {
        cout<<"Draw"<<endl;
    } else {
        cout<<"Aoki"<<endl;
    }

    return 0;
}
