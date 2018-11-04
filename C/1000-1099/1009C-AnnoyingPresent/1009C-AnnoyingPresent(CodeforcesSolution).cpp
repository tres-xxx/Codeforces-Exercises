//this code is the solution posted on Educational Codefoces's solution
#include <iostream>
using namespace std;

typedef long long ll;

int main(){
    int n,m;
    cin >> n >> m;
    ll neg = ((n-1)/2)*ll((n-1)/2+1);
    if(n%2 == 0){
        neg += n/2;
    }
    ll pos = n*ll(n-1)/2;
    ll ans = 0;
    for(int i = 0; i < m; i++){
        int x,d;
        cin >> x >> d;
        ans += x*ll(n);
        if(d < 0){
            ans += neg*d;
        }
        else{
            ans += pos*d;
        }
    }
    cout.precision(15);
    cout << double(ans)/n << endl;
    return 0;
}
