#include <iostream>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;
    long long i = 1;
    long long j = 1;
    if( n % 2 == 0){
        if(n/2 < k){
            i = (n/2) + 1;
            j = 2;
        } 
    }
    else{
        if((n/2) + 1 < k){
            i = (n/2) + 2;
            j = 2;
        }
    }
    for(;i < k; i++ )
        j = j + 2;
    cout << j;
    return 0;
}