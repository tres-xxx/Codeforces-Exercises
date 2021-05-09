//solution posted by AliOsm GitHub
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int a_n[51] = {0},b_m[51] = {0};
    long long c[51] = {0};
    for(int i = 0; i < n; i++){ //gets elements a
        cin >> a_n[i];
    }
    for(int i = 0; i < m; i++){//gets elements b
        cin >> b_m[i];
    }
    for(int i = 0; i < n; i++){
        long long mx = -2e18; //minimum number possible
        for(int j = 0; j < m; j++){
            mx = max(mx, 1ll * a_n[i] * b_m[j]); //the maximum multiplication number
        }
        c[i] = mx;
    }
    sort(c,c+n);
    cout << c[n-2] << endl;
    return 0;
}