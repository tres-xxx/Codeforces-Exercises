#include <stdlib.h>
#include <iostream>
using namespace std;

int main(){
    long long int a,b,s;
    cin >> a >> b >> s;
    cout << (((s >= (abs(a)+abs(b))) && s%2 == (abs(a)+abs(b))%2) ? "Yes" : "No") << endl;
    return 0;
}
