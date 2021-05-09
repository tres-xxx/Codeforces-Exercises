#include <stdlib.h>
#include <iostream>
using namespace std;

int main(){
    long long a,b,c;
    cin >> a >> b >> c;
    if(((b < a) && c >= 0) || ((b > a) && c <= 0)){
        cout << "NO" << endl;
        return 0;
    }
    if(c == 0){
        if(b == a) cout << "YES" << endl;
        else cout << "NO" << endl;
        return 0;
    }
    if(a < b) while(a < b) a+=c;
    else while(a > b) a+=c;
    if(a == b) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
