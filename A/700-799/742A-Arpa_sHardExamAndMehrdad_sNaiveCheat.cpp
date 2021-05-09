#include <math.h>
#include <iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long lastD = 1;
    if(n>0){
        int number = n%4;
        switch(number){
            case 0: lastD = 6; break;
            case 1: lastD = 8; break;
            case 2: lastD = 4; break;
            case 3: lastD = 2; break;
            default: cout << "error" << endl;break;
        }
    }
    /*for(long long i = 0; i < n; i++){
        lastD *= 8;
        lastD %= 10;
    }*/
    //long long lastD = pow(8,n);
    //lastD%=10;
    cout << lastD << endl;
    return 0;
}
