#include <algorithm>
#include <iostream>
using namespace std;

long long sumD(long long *v,long long x1,long long x2){
    long long sumV = 0;
    for(long long j = x1; j <= x2; j++){
        sumV += v[j];
    }
    if(x1 == x2) return sumV;
    long long half = x1+x2+1;
    long long divx11,divx12,divx21,divx22;
    divx11 = x1; divx22 = x2;
    divx21 = half/2;
    divx12 = divx21-1;
    return sumV + sumD(v,divx11,divx12) + sumD(v,divx21,divx22);
};

int main(){
    long long n;
    cin >> n;
    long long ai[n];
    for(long long i = 0; i < n; i++)
        cin >> ai[i];
    sort(ai,n + ai);
    cout << sumD(ai, 0, n-1) << endl;
    return 0;
};
