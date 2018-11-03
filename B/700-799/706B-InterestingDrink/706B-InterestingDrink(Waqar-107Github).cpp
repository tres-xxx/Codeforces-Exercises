//this code has been writen by Waqar-107 on Github
#include <cstdio>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main(){
    long long int i;
    long long int n,q,count = 0;
    cin >> n;
    long long int *x = new long long int [n];
    for(i = 0; i < n; i++){
        cin >> x[i];
    }
    cin >> q;
    long long int *m = new long long int [q];
    for(i = 0; i < q; i++){
        cin >> m[i];
    }
    sort(x,x+n);
    for(i = 0; i < q; i++){
        cout << upper_bound(x,x+n,m[i])-x << endl;
    }
    return 0;
}
