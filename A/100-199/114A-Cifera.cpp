#include <iostream>
using namespace std;

int main(){
    long long k,k_2, l;
    cin >> k >> l;
    k_2 = k;
    bool exists = false;
    long long exponential = 0;
    do{
        if(k_2 != l){
            k_2 *= k;
            exponential++;
        }
        else{
            exists = true;
            break;
        }
    }
    while(k_2 <= l);
    
    if(exists){
        cout << "YES\n" << exponential << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}