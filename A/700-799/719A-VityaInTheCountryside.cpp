#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int moonL=0,tp;
    if(n > 0){
        cin >> tp;
    }
    for(int i = 1; i < n; i++){
        int t;
        cin >> t;
        moonL = tp-t;
        tp = t;        
    }
    if((moonL == -1 && tp != 15) || (moonL == 1 && tp == 0) || tp == 0){
        cout << "UP" << endl;
    }
    else{
        if(moonL == 1 || tp == 15){
            cout << "DOWN" << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }
    return 0;
}
