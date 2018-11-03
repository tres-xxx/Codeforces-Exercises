#include <math.h>
#include <iostream>
using namespace std;

int main(){
    int n, t;
    cin >> n >> t;
    if(n == 1 && t == 10){
        cout << "-1" << endl;    
    }
    else{
        if(t == 10){
            cout << "1";
            for(int i = 1; i < n; i++){
                cout << "0";            
            }
        }
        else{
            for(int i = 1; i <= n; i++){
                cout << t;
            }
        }
        //cout << pow(10,n-1)+t << endl;
        cout << endl;
    }
    return 0;
};
