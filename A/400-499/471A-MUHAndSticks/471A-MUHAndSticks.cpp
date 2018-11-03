#include <iostream>
using namespace std;

int main(){
    int sticks[10] = {0};
    int a,b,c,d;
    a = b = c = d = 0;
    bool legs = false;
    for(int i = 0; i < 6; i++){
        int t; cin >> t;
        sticks[t]++;
        if(sticks[t] == 1){
            if(a == 0) a = t;
            else{
                if(b == 0) b = t;
                else{
                    if(c == 0) c = t;
                    else d = t;
                }
            }
        }
        if(sticks[t] == 4){ legs = true;}
    }
    if(d != 0 || legs == false){
        cout << "Alien";
    }
    else{
        if(c == 0){
            if(sticks[a] == 5 || sticks[b] == 5){
                cout << "Bear";
            }
            else{ cout << "Elephant";}
        }
        else cout << "Bear";
    }
    cout << endl;
    return 0;
}
