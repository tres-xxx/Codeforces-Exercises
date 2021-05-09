#include <iostream>
using namespace std;

int main(){
    int nA,nB,k,m;
    cin >> nA >> nB;
    cin >> k >> m;
    int ai[nA],bi[nB];
    for(int i = 0; i < nA; i++) cin >> ai[i];
    for(int i = 0; i < nB; i++) cin >> bi[i];
    bool possible = true;
    for(int i = 0; i < k; i++) 
        if(ai[i] >= bi[nB-m]){ possible = false; break; }
    if(possible) cout << "YES";
    else cout << "NO";
    cout << endl;
    return 0;
}
