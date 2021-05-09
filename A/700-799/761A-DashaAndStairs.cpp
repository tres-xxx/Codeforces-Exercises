#include <iostream>
using namespace std;

int main(){
    int a,b,n;
    cin >> a >> b;
    n = a-b;
    if(n >= -1 && n <= 1 && (a!= 0 || b != 0)) cout << "YES";
    else cout << "NO";
    cout << endl;
    return 0;
}
