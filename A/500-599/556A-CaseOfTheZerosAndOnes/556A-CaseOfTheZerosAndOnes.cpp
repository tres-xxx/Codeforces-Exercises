#include <stdlib.h>
#include <iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    string line;
    cin >> line;
    long long zero=0,one=0;
    while(n){
        n--;
        if(line[n] == '0'){
            zero++;
        }
        else{
            one++;
        }
    }
    cout << abs(zero-one) << endl;
    return 0;
};
