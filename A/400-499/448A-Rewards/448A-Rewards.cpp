#include <iostream>
using namespace std;

int main(){
    int t,cup=0,medal=0,n;
    for(int i = 0; i < 6; i++){
        cin >> t;
        if(i < 3){
            cup += t;
        }
        else{
            medal += t;
        }
    }
    cin >> n;
    t = (cup/5)+(medal/10);
    if(cup%5!=0){
        t++;    
    }
    if(medal%10!=0){
        t++;
    }
    if(t <= n){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
