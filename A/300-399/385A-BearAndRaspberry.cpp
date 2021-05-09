#include <iostream>
using namespace std;

int main(){
    int n, c;
    cin >> n >> c;
    int max;
    int x_i;
    cin >> x_i; max = x_i;
    cin >> x_i; max = max-x_i;
    for(int i = 0; i < (n-2);i++ ){
        int t,t2;
        cin >> t;
        t2 = x_i-t;
        if(max<t2){ max = t2;}
        x_i = t;
    }
    max=max-c;
    if(max>0) cout << max;
    else cout << "0";
    return 0;
}