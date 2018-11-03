#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int *xn = new int[n];
    for(int i = 0; i < n; i++){
        cin >> xn[i];
    }
    sort(xn,xn + n);
    while((xn[n-1]>xn[0])&&(xn[0]!=1)){
        for(int i = n-1; i > 0; i--){
            if(xn[i] > xn[0]){
                xn[i] -= xn[0];            
            }
            else{
                break;
            }
        }
        sort(xn, xn + n);
    }
    if(xn[0] == 1){
        cout << n << endl;
    }
    else{
        cout << xn[0]*n << endl;
    }
    return 0;
};
