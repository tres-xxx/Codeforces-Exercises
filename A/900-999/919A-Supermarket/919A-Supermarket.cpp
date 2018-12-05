#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    double minSuper = 1e9,t,a,b;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        t = (double)(a/b)*(double)m;
        if(t < minSuper) minSuper = t;
    }
    cout.precision(8);
    cout << minSuper << endl;
    return 0;
}
