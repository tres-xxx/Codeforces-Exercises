//based on the code writted by DionysiosB on Github
#include <cstdio>
#include <iostream>
using namespace std;

bool isLucky(long long x, int l){
    if(x < 0){
        x = -x;
    }
    while(x > 0){
        if(x%10 == l){
            return true;
        }
        else{
            x = x/10;
        }
    }
    return false;
};

int main(){
    long long a;
    cin >> a;
    int lucky_number = 8;
    //for(int p = 1; p <= 1000; p++){ //why a thousand?
    for(int p = 1; p <= 18; p++){
        if(isLucky(a+p, lucky_number)){
            cout << p << endl;
            break;
        }
    }
    return 0;
};
