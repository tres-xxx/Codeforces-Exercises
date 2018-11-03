#include <iostream>
using namespace std;

int main(){
    long long n,k=1;
    cin >> n >> k;
    long long h_i[150001]={};
    for(long long i = 0; i < n;i++){ cin >> h_i[i];}
    long long pos=1, cons = 0;
    for(long long j = 0; j < k; j++){
        cons += h_i[j];
    }
    for(long long i = 1, cons_2=cons, j=k+(i-1); j < n; i++,j++){
        cons_2 = cons_2 + (h_i[j]) - h_i[i-1];
        if(cons_2 < cons){
            pos = i+1;
            cons = cons_2;
        }
    }
    
    cout << pos;
    
    return 0;
}