#include <iostream>
using namespace std;

int main(){
    long n = 0, t;
    cin >> n >> t;
    long *ai = new long[n];
    bool can_go = false;
    for(int i = 0; i < n-1; i++){
        cin >> ai[i];
    }
    for(long i = 0; i < t && i < n;){
        if((i+1) == t){
            can_go = true;
            break;        
        }
        i = i + ai[i];
    }
    if(can_go){
        cout << "YES" << endl;    
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
};
