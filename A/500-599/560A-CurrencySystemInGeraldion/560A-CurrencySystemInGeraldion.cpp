#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    bool mini = false;
    while(n > 0){
        int t;
        cin >> t;
        if(!mini){
            if(t == 1){
                mini = true;
            }
        }            
        n--;
    }
    cout << ((mini) ? "-1" : "1") << endl;
    return 0;
}
