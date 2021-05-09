#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int hours = a;
    int mod;
    while(a >= b){
        mod = a%b;
        a = a/b;
        hours += a;
        a += mod;
    }
    
    cout << hours << endl;
    return 0;
};
