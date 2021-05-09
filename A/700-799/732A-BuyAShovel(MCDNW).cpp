#include <iostream>
using namespace std;

int main(){
    int k, r;
    cin >> k >> r;
    int amountShovels = 1;
    int price = k;
    while(price%10 != r){
        price = price+k;
        amountShovels++;
    }
    cout << amountShovels << endl;
    return 0;
};
