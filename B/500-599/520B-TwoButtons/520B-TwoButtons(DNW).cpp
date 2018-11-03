#include <iostream>
using namespace std;

int main(){
    int n,m,up=0,down=0,t,tp;
    cin >> n >> m;
    t = n;
    while(t<m){
        t*=2;
        up++;
    }
    up += (t-m);
    t = n;
    tp = m/2;
    if(m%2 != 0){
        tp++;
        down++;
    }
    while(t < tp){
        t*=2;
        down++;
    }
    down += ((t-tp)+1);
    cout << ((up>down) ? down : up) << endl;
    return 0;
}
