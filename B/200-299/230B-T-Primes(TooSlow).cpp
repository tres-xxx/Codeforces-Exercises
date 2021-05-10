//#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    long long n,greatest = 0; //greatest has the biggest number to close the cycle
    cin >> n;
    long long *xi = new long long[n+1];
    short *tprime = new short[n+1]; //1==fine||n!=1==does not work
    for(long long i = 0; i < n; i++){
        cin >> xi[i];
        tprime[i] = 0;
        if(greatest < xi[i]){greatest = xi[i];}
    }
    
    bool first = false;
    for(long long i = 2,l=0,k=0,m=0; i < greatest;){
        for(int j = 0; j < n; j++){
            if(tprime[j]<=2){
                if(i < xi[j]){
                    if(xi[j]%i==0){
                        tprime[j]++;
                    }
                }
            }
        }
        if(i < 13){i++;}
        else{
            if(!first){
                k = 11;l=7;m=5;
                first = true;
            }
            i = (k+l)-m;
            m=l;l=k;k=i;
        }
    }
    for(long long i = 0; i < n; i++){
        if(tprime[i]==1){cout << "YES" << endl;}
        else{cout << "NO" << endl;}
    }
    return 0;
};