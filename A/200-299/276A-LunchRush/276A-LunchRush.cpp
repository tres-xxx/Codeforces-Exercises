#include <stdlib.h>
#include <iostream>
using namespace std;

int joy(int fi,int ti,int k){
    int t;
    if(ti>k){
        t = ti-k;
        if(t<0){ t = fi-abs(ti);}
        else{ t = fi-t;}
    }
    else{ t = fi;}
    return t;
};

int main(){
    int n,k;
    cin >> n >> k;
    int max;
    int fi,ti;
    cin >> fi >> ti;
    max = joy(fi,ti,k);
    for(int i=1; i<n; i++){
        cin >> fi >> ti;
        int t = joy(fi,ti,k);
        if(t > max){ max = t;}
    }
    cout << max;
    return 0;
};