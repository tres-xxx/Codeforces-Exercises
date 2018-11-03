#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n;
    long long l,*ai;
    long double radious=0;
    cin >> n >> l;
    ai = new long long[n];
    for(long i = 0; i < n; i++){
        cin >> ai[i];
    }
    sort(ai,ai+n);
    long double division;
    if(ai[0]!=0){
        radious = ai[0];
    }
    for(long i = 0; i < (n-1); i++){
        division = ((long double)(ai[i+1]-ai[i])/(long double)2);
        radious = max(radious,division);
    }
    cout << radious << endl;
    return 0;
};
