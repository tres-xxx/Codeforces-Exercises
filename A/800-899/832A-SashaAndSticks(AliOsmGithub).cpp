#include <iostream>
using namespace std;

int main(){
    long long n,k;
    //bool winner = false;
    cin >> n >> k;
    /*while(n >= k){
        n-=k;
        if(!winner) winner = true;
        else winner = false;
    }
    if(winner) cout << "YES";
    else cout << "NO";*/
    //-------------------------
    //solution by AliOsm posted on github.com
    //-------------------------
    long long rem = n % k;
    n-=rem;
    long long d = n/k;
    if(d%2 == 0) cout << "NO";
    else cout << "YES";
    cout << endl;
    return 0;
}
