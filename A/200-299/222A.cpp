#include<iostream>
using namespace std;

int main(){
    int n,k,isin=0;
    cin >> n >> k;
    long long tqueue[n];
    for(int i = 0; i < n; i++) cin >> tqueue[i];
    int begin = tqueue[n-1];
    for(int i = n-2; i>=0; i--){
        if(tqueue[i] != begin || i == 0){
            if(i != 0) begin = i+1;
            else{
                if(tqueue[1] != tqueue[0]) begin = 1;
                else begin = 0;
            }
            i = -1;
            isin=1;
        }
    }
    //cout << begin;
    if(isin != 0){
        if(k >= (begin+1)) cout << begin;
        else cout << "-1";
    }
    else cout << "0";
    return 0;
}