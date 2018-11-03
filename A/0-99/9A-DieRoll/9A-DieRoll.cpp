#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int y,w;
    cin >> y >> w;
    int t = max(w,y);
    if(t == 1){
        cout << "1/1";
    }
    else{
        /*if(t == 6 && w != y){
           cout << "0/1";
        }
        else{*/
            int n,d;
            n = 6-(t-1);
            d = 6;
            for(int i = 2; i < 6; i++){
                if(n%i == 0 && d%i == 0){
                    n /= i; d /= i; i = 2;
                }
            }
            cout << n << "/" << d;
        //}
    }
    cout << endl;
    return 0;
}
