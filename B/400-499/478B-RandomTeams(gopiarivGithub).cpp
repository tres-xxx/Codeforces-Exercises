//code posted by gopiariv on Github
//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

long long nC2(long long n){
    if(n<2){ //??
        return 0;
    }
    return (n*(n-1)/2);
};

int main(){
    //ios::sync_with_stdio(false);
    long long n,m,minOfPairs,maxOfPairs;
    cin >> n >> m;
    minOfPairs = (m-n%m)*(nC2(n/m))+(n%m)*(nC2(n/m+1));//?? :/
    maxOfPairs = nC2(n-m+1);// ?? :/
    cout << minOfPairs << " " << maxOfPairs << endl;
    return 0;
}
