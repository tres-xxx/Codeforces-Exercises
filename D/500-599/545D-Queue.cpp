#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    long n,tS,maxD;
    tS = maxD = 0;
    cin >> n;
    long ti [n];
    for(long i = 0; i < n; i++) cin >> ti[i];
    sort(ti, ti + n);
    for(long i = 0; i < n; i++){
        if(tS <= ti[i]){
            tS += ti[i];
            maxD++;
        }
    }
    cout << maxD << endl;
    return 0;
}
