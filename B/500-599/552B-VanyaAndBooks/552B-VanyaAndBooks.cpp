#include <iostream>
using namespace std;

int digitsN(long long n){
    int d = 1;
    while((n/=10) > 0){ 
        d++;
    }
    return d;
}

long long mult10(int d){
    long long n = 1;
    for(int i = 1; i < d; i++)
        n*=10;
    return n;
}

int main(){
    long long n,nm,np,maxC=0;
    cin >> n;
    nm = n;
    while(nm > 9){
        np = mult10(digitsN(nm));
        maxC += ((nm-np+1)*digitsN(np));
        nm = np-1;
    }
    maxC += nm;
    cout << maxC << endl;

    //worst solution
    //long long n,digits = 0,d=1;
    //cin >> n;
    //cout << mult10(n) << endl;
    //for(int i = 1; i <= n; i++){
        //int d = 1;
        //int ii = i;
        //while((ii/=10) > 0) d++;
        //digits+=d;
    //}
    //cout << digits << endl;*/
    return 0;
}
