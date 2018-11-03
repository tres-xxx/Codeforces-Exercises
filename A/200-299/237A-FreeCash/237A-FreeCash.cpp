#include <iostream>
using namespace std;

int main(){
    long n; //number of cafe visitors
    cin >> n;
    long mnc=0; //minimum number of cashes
    long mnc_n=0; //other cashes
    int hi,mi=-1; //person does not exist
    while(n--){
        int hi_n,mi_n;
        cin >> hi_n >> mi_n; //person who enters
        if(hi != hi_n || mi != mi_n){
            hi = hi_n; mi = mi_n;
            mnc_n = 1; //reset number of people
        }
        else{
            mnc_n++; //increase if are the same
            if(mnc_n > mnc){mnc = mnc_n;} //stablish the new top
        }
    }
    cout << mnc << endl;
    return 0;
}