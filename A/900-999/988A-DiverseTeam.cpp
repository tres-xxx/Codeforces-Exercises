#include <iostream>
using namespace std;

int main(){
    int n,k,t,dif=0;
    cin >> n >> k;
    int ai[101] = {};
    int ait[100] = {};
    for(int i = 1; i <= n; i++){
        cin >> t;
        if(ai[t] == 0){ 
            ait[dif] = i;
            dif++;            
        }
        ai[t]++;
    }
    if(dif < k){
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    cout << ait[0];
    for(int i = 1; i < dif && i < k; i++){
        cout << " " << ait[i];
    }
    cout << endl;
    return 0;
}
